#ifndef LIBRARY_CATALOG_H
#define LIBRARY_CATALOG_H

#include <vector>
#include <string>
#include "Book.h"

class LibraryCatalog {
private:
    std::vector<Book> books;

public:
    LibraryCatalog();

    void addBook(const std::string& title, const std::string& author, int year);
    void viewBooks();
    void searchBook(const std::string& keyword);
    void removeBook(int index);
};

#endif
