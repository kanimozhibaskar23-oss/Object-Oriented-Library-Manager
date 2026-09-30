#include "Loan.h"

Loan::Loan() {
    bookId = 0;
    memberId = 0;
    date = "";
}

Loan::Loan(int bookId, int memberId, string date) {
    this->bookId = bookId;
    this->memberId = memberId;
    this->date = date;
}

int Loan::getBookId() {
    return bookId;
}

int Loan::getMemberId() {
    return memberId;
}

string Loan::getDate() {
    return date;
}