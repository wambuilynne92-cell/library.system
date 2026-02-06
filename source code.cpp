#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isAvailable;

public:
    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        isAvailable = true;
    }

    int getID() { return bookID; }
    string getTitle() { return title; }
    bool available() { return isAvailable; }

    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Book is not available.\n";
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << "Book returned successfully.\n";
    }

    void display() {
        cout << "ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
};

class User {
private:
    int userID;
    string name;

public:
    User(int id, string n) {
        userID = id;
        name = n;
    }

    void display() {
        cout << "User ID: " << userID << ", Name: " << name << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book b) {
        books.push_back(b);
        cout << "Book added successfully.\n";
    }

    void removeBook(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getID() == id) {
                books.erase(books.begin() + i);
                cout << "Book removed successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void searchBook(string title) {
        for (auto &b : books) {
            if (b.getTitle() == title) {
                b.display();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void borrowBook(int id) {
        for (auto &b : books) {
            if (b.getID() == id) {
                b.borrowBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(int id) {
        for (auto &b : books) {
            if (b.getID() == id) {
                b.returnBook();
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void displayBooks() {
        for (auto &b : books) {
            b.display();
        }
    }
};

int main() {
    Library lib;

    Book b1(1, "C++ Basics", "Bjarne");
    Book b2(2, "Data Structures", "Mark");

    lib.addBook(b1);
    lib.addBook(b2);

    cout << "\nAll Books:\n";
    lib.displayBooks();

    cout << "\nSearching for C++ Basics:\n";
    lib.searchBook("C++ Basics");

    cout << "\nBorrowing Book ID 1:\n";
    lib.borrowBook(1);

    cout << "\nAttempting to borrow same book again:\n";
    lib.borrowBook(1);

    cout << "\nReturning Book ID 1:\n";
    lib.returnBook(1);

    cout << "\nRemoving Book ID 2:\n";
    lib.removeBook(2);

    cout << "\nFinal Book List:\n";
    lib.displayBooks();

    return 0;
}
