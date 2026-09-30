#include "Book.h"

Book::Book() {
    id = 0;
    title = "";
    author = "";
    available = true;
}

Book::Book(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    available = true;
}

int Book::getId() {
    return id;
}

string Book::getTitle() {
    return title;
}

string Book::getAuthor() {
    return author;
}

bool Book::isAvailable() {
    return available;
}

void Book::issueBook() {
    if (available) {
        available = false;
    }
}

void Book::returnBook() {
    available = true;
}