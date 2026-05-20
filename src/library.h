#pragma once
#include <vector>
#include "book.h"
using namespace std;

void addBook(vector<Book>& library);
void removeBook(vector<Book>& library);
void searchByAuthor(vector<Book>& library);
void searchByTitle(vector<Book>& library);
void sortByYear(vector<Book>& library);
void sortByAuthor(vector<Book>& library);