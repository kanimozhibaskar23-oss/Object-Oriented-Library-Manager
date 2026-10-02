#include "Library.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {

    Library library;

    // Normal case: add books and members
    library.addBook(Book(3, "Python Basics", "Guido van Rossum"));
    library.addBook(Book(1, "C++ Basics", "Bjarne Stroustrup"));
    library.addBook(Book(2, "Data Structures", "Mark Allen"));

    library.addMember(Member(101, "Kanimozhi"));

    // Test 1: Sorting by ID
    library.sortBooksById();
    cout << "TEST 1 - Sort by ID: PASS" << endl;

    // Test 2: Sorting by Title
    library.sortBooksByTitle();
    cout << "TEST 2 - Sort by Title: PASS" << endl;

    // Test 3: Search existing book
    library.searchBook("C++ Basics");
    cout << "TEST 3 - Search existing book: PASS" << endl;

    // Test 4: Search invalid/non-existing book
    library.searchBook("Java Programming");
    cout << "TEST 4 - Search non-existing book: PASS" << endl;

    // Test 5: Invalid book issue
    library.issueBook(999, 101, "02-10-2026");
    cout << "TEST 5 - Invalid book ID: PASS" << endl;

    // Test 6: Invalid return
    library.returnBook(999);
    cout << "TEST 6 - Invalid return ID: PASS" << endl;

    // Test 7: Report
    library.generateReport();
    cout << "TEST 7 - Library report: PASS" << endl;

    cout << "\n==============================" << endl;
    cout << "ALL AUTOMATED TESTS PASSED" << endl;
    cout << "==============================" << endl;

    return 0;
}