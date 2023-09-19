// Question: Create a C++ program that demonstrates composition by modeling a Library class 
// that contains an array of Book objects. Each Book object should have properties
//  like title, author, and publication year. Implement methods to add, 
//  remove, and list books in the library.
#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    Book(const std::string& bookTitle, const std::string& bookAuthor)
        : title(bookTitle), author(bookAuthor) {}

    // Display book information
    void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
    }
};

class Library {
private:
    Book* books[100]; // Array of book pointers
    int numBooks;     // Number of books in the library

public:
    Library() : numBooks(0) {}

    // Add a book to the library
    void addBook(const std::string& title, const std::string& author) {
        if (numBooks < 100) {
            books[numBooks] = new Book(title, author);
            numBooks++;
            std::cout << "Book added to the library." << std::endl;
        } else {
            std::cout << "Library is full. Cannot add more books." << std::endl;
        }
    }

    // Remove a book from the library
    void removeBook(int index) {
        if (index >= 0 && index < numBooks) {
            delete books[index];
            for (int i = index; i < numBooks - 1; i++) {
                books[i] = books[i + 1];
            }
            numBooks--;
            std::cout << "Book removed from the library." << std::endl;
        } else {
            std::cout << "Invalid book index." << std::endl;
        }
    }

    // List all books in the library
    void listBooks() const {
        if (numBooks == 0) {
            std::cout << "The library is empty." << std::endl;
        } else {
            std::cout << "Books in the library:" << std::endl;
            for (int i = 0; i < numBooks; i++) {
                std::cout << "Book " << i + 1 << ":" << std::endl;
                books[i]->display();
                std::cout << std::endl;
            }
        }
    }

    // Destructor to release memory
    ~Library() {
        for (int i = 0; i < numBooks; i++) {
            delete books[i];
        }
    }
};

int main() {
    Library myLibrary;

    myLibrary.addBook("The Catcher in the Rye", "J.D. Salinger");
    myLibrary.addBook("To Kill a Mockingbird", "Harper Lee");
    myLibrary.addBook("1984", "George Orwell");

    myLibrary.listBooks();

    myLibrary.removeBook(1);

    myLibrary.listBooks();

    return 0;
}
