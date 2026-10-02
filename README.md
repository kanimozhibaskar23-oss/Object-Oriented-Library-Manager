# Object-Oriented Library Manager

A C++ console-based Library Management Application using Object-Oriented Programming.

## Features
- Display books and members
- Search books
- Issue and return books
- Save and load library data
- Sort books by title
- Sort books by ID
- Generate library analytics report
- Automated testing

## Project Structure
- Book.h / Book.cpp - Book data
- Member.h / Member.cpp - Member data
- Loan.h / Loan.cpp - Loan information
- Library.h / Library.cpp - Library management logic
- main.cpp - Console menu
- test_library.cpp - Automated tests
- complexity_notes.txt - Complexity analysis
- test_results.txt - Test evidence
- class_diagram.txt - Class design
- library_data.txt - Saved data

## Algorithms
### Sort by Book Title
C++ std::sort() arranges books alphabetically.
- Time: O(n log n) average
- Auxiliary space: O(log n)

### Sort by Book ID
C++ std::sort() arranges books by ascending ID.
- Time: O(n log n) average
- Auxiliary space: O(log n)

### Book Search
Linear search finds a book by title.
- Time: O(n)
- Space: O(1)

### Library Report
A single traversal calculates book statistics.
- Time: O(n)
- Space: O(1)

## Automated Testing
Tests cover:
- Sort by ID
- Sort by title
- Existing book search
- Non-existing book search
- Invalid book ID
- Invalid return ID
- Library report

Result: ALL AUTOMATED TESTS PASSED.

See `test_results.txt` for evidence.

## Build and Run
Requirements: C++ compiler such as GCC/MinGW.

Build:
`g++ Book.cpp Member.cpp Loan.cpp Library.cpp main.cpp -o library.exe`

Run:
`library.exe`

Build tests:
`g++ Book.cpp Member.cpp Loan.cpp Library.cpp test_library.cpp -o test_library.exe`

Run tests:
`test_library.exe`

## Data Persistence
Library records are stored in `library_data.txt` and loaded when the application starts.

## Capstone Verification
The application has been clean-built and verified for startup, reporting, title sorting, ID sorting, and safe exit.

## Technology
C++, Object-Oriented Programming, STL, File Handling, Automated Testing, Git, GitHub.

## Author
KANIMOZHI B

GitHub: https://github.com/kanimozhibaskar23-oss
