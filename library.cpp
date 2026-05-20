#include <iostream>
#include <algorithm>
#include "library.h"
#include "io.h"
using namespace std;

void addBook(vector<Book>& library) {
    Book b = inputBook();
    library.push_back(b);
    cout << "Книгу додано!" << endl;
}

void removeBook(vector<Book>& library) {
    string title;
    cout << "Введіть назву книги для видалення: ";
    cin.ignore();
    getline(cin, title);

    for (auto it = library.begin(); it != library.end(); ++it) {
        if (it->title == title) {
            library.erase(it);
            cout << "Книгу видалено!" << endl;
            return;
        }
    }
    cout << "Книгу не знайдено." << endl;
}

void searchByAuthor(vector<Book>& library) {
    string author;
    cout << "Введіть автора: ";
    cin.ignore();
    getline(cin, author);

    bool found = false;
    for (auto& b : library) {
        if (b.author == author) {
            printBook(b);
            found = true;
        }
    }
    if (!found) cout << "Книг цього автора не знайдено." << endl;
}

void searchByTitle(vector<Book>& library) {
    string title;
    cout << "Введіть назву: ";
    cin.ignore();
    getline(cin, title);

    bool found = false;
    for (auto& b : library) {
        if (b.title == title) {
            printBook(b);
            found = true;
        }
    }
    if (!found) cout << "Книгу не знайдено." << endl;
}

void sortByYear(vector<Book>& library) {
    sort(library.begin(), library.end(), [](const Book& a, const Book& b) {
        return a.year < b.year;
    });
    cout << "Відсортовано за роком." << endl;
    printBooks(library);
}

void sortByAuthor(vector<Book>& library) {
    sort(library.begin(), library.end(), [](const Book& a, const Book& b) {
        return a.author < b.author;
      });
    cout << "Відсортовано за автором." << endl;
    printBooks(library);
}