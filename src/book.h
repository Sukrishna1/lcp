#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    std::string title;
    std::string author;
    int year;

    Book(const std::string& t, const std::string& a, int y);
};

#endif
