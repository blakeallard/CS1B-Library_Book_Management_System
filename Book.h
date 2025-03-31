//
// Created by ekalb on 3/12/2025.
//

#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <string>
using namespace std;


class Book
{
private:
    string title;
    string author;
    int    pubYear;

public:
    Book();
    void SetBookInfo(string t, string a, int pY);
    void DisplayBookInfo() const;
};



#endif //BOOK_H
