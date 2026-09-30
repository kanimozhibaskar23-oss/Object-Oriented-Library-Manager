#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Member.h"
#include "Loan.h"
#include <vector>
#include <string>
using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;
    vector<Loan> loans;

public:
    void addBook(Book book);
    void addMember(Member member);

    void showBooks();
    void showMembers();

    void searchBook(string title);
    void issueBook(int bookId, int memberId, string date);
    void returnBook(int bookId);

    void saveToFile();
    void loadFromFile();
};

#endif