#ifndef LOAN_H
#define LOAN_H

#include <string>
using namespace std;

class Loan {
private:
    int bookId;
    int memberId;
    string date;

public:
    Loan();
    Loan(int bookId, int memberId, string date);

    int getBookId();
    int getMemberId();
    string getDate();
};

#endif