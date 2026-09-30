\# Object-Oriented Library Manager



\## Project Overview



This is a C++ Library Management Application developed using Object-Oriented Programming concepts.



\## Features



\- Add and display books

\- Display library members

\- Search books

\- Issue books

\- Return books

\- Check book availability

\- Save library records to a local file

\- Load saved records when the application starts



\## Classes



\### Book

Stores book ID, title, author, and availability status.



\### Member

Stores member ID and member name.



\### Loan

Stores book ID, member ID, and loan date.



\### Library

Manages books, members, loans, searching, issuing, returning, and file persistence.



\## Technologies Used



\- C++

\- Object-Oriented Programming

\- STL Vector

\- File Handling



\## How to Run



Compile the project using:



g++ Book.cpp Member.cpp Loan.cpp Library.cpp main.cpp -o library



Run the application using:



library



\## Sample Operations



1\. Show Books

2\. Show Members

3\. Search Book

4\. Issue Book

5\. Return Book

6\. Save Data

0\. Exit



\## File Persistence



Library information is saved in:



library\_data.txt



The application also checks for previously saved data when it starts.



\## Author



KANIMOZHI B

