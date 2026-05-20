// main.cpp
#include <iostream>
#include "book.h"
#include "library.h"
#include "io.h"
using namespace std;

int main() {
    vector<Book> library;
    loadFromFile(library, "library.txt");

    int choice;
    do {
        cout << "\n=== Домашня бібліотека ===" << endl;
        cout << "1. Показати всі книги" << endl;
        cout << "2. Додати книгу" << endl;
        cout << "3. Видалити книгу" << endl;
        cout << "4. Пошук за автором" << endl;
        cout << "5. Пошук за назвою" << endl;
        cout << "6. Сортувати за роком" << endl;
        cout << "7. Сортувати за автором" << endl;
        cout << "0. Вийти" << endl;
        cout << "Вибір: ";
        cin >> choice;

        switch(choice) {
            case 1: printBooks(library); break;
            case 2: addBook(library); break;
            case 3: removeBook(library); break;
            case 4: searchByAuthor(library); break;
            case 5: searchByTitle(library); break;
            case 6: sortByYear(library); break;
            case 7: sortByAuthor(library); break;
            case 0: saveToFile(library, "library.txt"); break;
            default: cout << "Невірний вибір!" << endl;
        }
    } while(choice != 0);

    return 0;
}