#include <iostream>
#include <limits> // Include this header for numeric_limits
#include "LibraryCatalog.h"

int main() {
    LibraryCatalog library;
    int choice;

    do {
        std::cout << "Library Catalog Menu" << std::endl;
        std::cout << "1. Add Book" << std::endl;
        std::cout << "2. View Books" << std::endl;
        std::cout << "3. Search Book" << std::endl;
        std::cout << "4. Remove Book" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        std::cout << "Before input: choice = " << choice << std::endl; // Debug line
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "After input: choice = " << choice << std::endl; // Debug line

        switch (choice) {
            case 1:
                {
                    std::string title, author;
                    int year;
                    std::cout << "Enter book title: ";
                    std::getline(std::cin, title);
                    std::cout << "Enter book author: ";
                    std::getline(std::cin, author);
                    std::cout << "Enter publication year: ";
                    std::cin >> year;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    library.addBook(title, author, year);
                }
                break;

            case 2:
                library.viewBooks();
                break;

            case 3:
                {
                    std::string keyword;
                    std::cout << "Enter search keyword: ";
                    std::getline(std::cin, keyword);
                    library.searchBook(keyword);
                }
                break;

            case 4:
                {
                    int index;
                    std::cout << "Enter index of book to remove: ";
                    std::cin >> index;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    library.removeBook(index);
                }
                break;

            case 5:
                std::cout << "Exiting..." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
                break;
        }

    } while (choice != 5);

    return 0;
}
