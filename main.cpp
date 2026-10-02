#include "Library.h"
#include <iostream>

using namespace std;

int main() {

    Library library;

    library.loadFromFile();

    library.addBook(Book(1, "C++ Basics", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Python Basics", "Guido van Rossum"));
    library.addBook(Book(3, "Data Structures", "Mark Allen"));

    library.addMember(Member(101, "Kanimozhi"));
    library.addMember(Member(102, "Priya"));

    int choice;

    do {
        cout << "\n==============================";
        cout << "\n   OBJECT-ORIENTED LIBRARY";
        cout << "\n==============================";
        cout << "\n1. Show Books";
        cout << "\n2. Show Members";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Save Data";
        cout << "\n7. Sort Books by Title";
        cout << "\n8. Sort Books by ID";
        cout << "\n9. Generate Library Report";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {

            library.showBooks();

        }
        else if (choice == 2) {

            library.showMembers();

        }
        else if (choice == 3) {

            string title;

            cin.ignore();

            cout << "Enter book title: ";
            getline(cin, title);

            library.searchBook(title);

        }
        else if (choice == 4) {

            int bookId, memberId;
            string date;

            cout << "Enter Book ID: ";
            cin >> bookId;

            cout << "Enter Member ID: ";
            cin >> memberId;

            cout << "Enter date: ";
            cin >> date;

            library.issueBook(bookId, memberId, date);

        }
        else if (choice == 5) {

            int bookId;

            cout << "Enter Book ID: ";
            cin >> bookId;

            library.returnBook(bookId);

        }
        else if (choice == 6) {

            library.saveToFile();

        }
        else if (choice == 7) {

            library.sortBooksByTitle();
            library.showBooks();

        }
        else if (choice == 8) {

            library.sortBooksById();
            library.showBooks();

        }
        else if (choice == 9) {

            library.generateReport();

        }
        else if (choice == 0) {

            cout << "\nThank you for using Library Manager!\n";

        }
        else {

            cout << "\nInvalid choice.\n";

        }

    } while (choice != 0);

    return 0;
}