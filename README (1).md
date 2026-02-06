 Online Library Management System

  The system manages library operations including adding, removing, searching, borrowing, and returning books.

 Features
- ✅ Add new books to the library
- ✅ Remove books from the library
- ✅ Search for books by title
- ✅ Borrow available books
- ✅ Return borrowed books
- ✅ Display all books in the library

 Classes

 Book Class
Represents a book in the library with the following attributes:
- `bookID`: Unique identifier for the book
- `title`: Title of the book
- `author`: Author of the book
- `isAvailable`: Availability status

Methods
- `borrowBook()`: Marks the book as borrowed
- `returnBook()`: Marks the book as available
- `display()`: Displays book information

 User Class
Represents a library user with:
- `userID`: Unique identifier for the user
- `name`: Name of the user

Methods:
- `display()`: Displays user information

 Library Class
Manages the collection of books with:
- Vector of `Book` objects

Methods:
- `addBook()`: Adds a new book to the library
- `removeBook()`: Removes a book by ID
- `searchBook()`: Searches for a book by title
- `borrowBook()`: Handles book borrowing
- `returnBook()`: Handles book returns
- `displayBooks()`: Shows all books

 OOP Concepts Used
Encapsulation: Data members are private, accessed through public methods
Abstraction: Complex operations are hidden behind simple interfaces
Modularity: System divided into distinct classes with specific responsibilities

Test Cases

 Positive Test Cases
- Adding books to the library
- Borrowing available books
- Returning borrowed books
- Searching for existing books

 Negative Test Cases
- Attempting to borrow unavailable books
- Searching for non-existing books
- Borrowing already borrowed books




