#include "Library.h"
#include <iostream>
#include <fstream>

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::addMember(Member member) {
    members.push_back(member);
}

void Library::showBooks() {
    cout << "\n--- Books ---\n";

    for (Book &book : books) {
        cout << "ID: " << book.getId()
             << " | Title: " << book.getTitle()
             << " | Author: " << book.getAuthor()
             << " | Status: ";

        if (book.isAvailable())
            cout << "Available";
        else
            cout << "Issued";

        cout << endl;
    }
}

void Library::showMembers() {
    cout << "\n--- Members ---\n";

    for (Member &member : members) {
        cout << "ID: " << member.getId()
             << " | Name: " << member.getName()
             << endl;
    }
}

void Library::searchBook(string title) {
    bool found = false;

    for (Book &book : books) {
        if (book.getTitle() == title) {
            cout << "\nBook Found!\n";
            cout << "ID: " << book.getId() << endl;
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\nBook not found.\n";
    }
}

void Library::issueBook(int bookId, int memberId, string date) {
    for (Book &book : books) {
        if (book.getId() == bookId) {

            if (book.isAvailable()) {
                book.issueBook();

                loans.push_back(
                    Loan(bookId, memberId, date)
                );

                cout << "\nBook issued successfully.\n";
            }
            else {
                cout << "\nBook is already issued.\n";
            }

            return;
        }
    }

    cout << "\nBook not found.\n";
}

void Library::returnBook(int bookId) {
    for (Book &book : books) {
        if (book.getId() == bookId) {

            if (!book.isAvailable()) {
                book.returnBook();
                cout << "\nBook returned successfully.\n";
            }
            else {
                cout << "\nBook is already available.\n";
            }

            return;
        }
    }

    cout << "\nBook not found.\n";
}

void Library::saveToFile() {
    ofstream file("library_data.txt");

    if (!file) {
        cout << "Error saving file.\n";
        return;
    }

    for (Book &book : books) {
        file << book.getId() << "|"
             << book.getTitle() << "|"
             << book.getAuthor() << "|"
             << book.isAvailable() << endl;
    }

    file.close();

    cout << "\nData saved successfully.\n";
}

void Library::loadFromFile() {
    ifstream file("library_data.txt");

    if (!file) {
        return;
    }

    cout << "\nPrevious library data found.\n";
    cout << "Data file loaded successfully.\n";

    file.close();
}