#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool available;

public:
    Book();
    Book(int id, string title, string author);

    int getId();
    string getTitle();
    string getAuthor();
    bool isAvailable();

    void issueBook();
    void returnBook();
};

#endif