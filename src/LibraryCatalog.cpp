#include "LibraryCatalog.h"
#include <iostream>

LibraryCatalog::LibraryCatalog() {}

void LibraryCatalog::addBook(const std::string& title, const std::string& author, int year) {
    books.push_back(Book(title, author, year));
    std::cout << "Book added successfully!" << std::endl;
}

void LibraryCatalog::viewBooks() {
    std::cout << "Viewing all books:" << std::endl;
    for (const Book& book : books) {
        std::cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << std::endl;
    }
}

void LibraryCatalog::searchBook(const std::string& keyword) {
    std::cout << "Searching for books with keyword: " << keyword << std::endl;
    for (const Book& book : books) {
        if (book.title.find(keyword) != std::string::npos || book.author.find(keyword) != std::string::npos) {
            std::cout << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year << std::endl;
        }
    }
}

void LibraryCatalog::removeBook(int index) {
    if (index >= 0 && index < books.size()) {
        std::cout << "Removing book: " << books[index].title << std::endl;
        books.erase(books.begin() + index);
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}
