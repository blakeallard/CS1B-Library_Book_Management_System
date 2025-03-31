//
// Created by ekalb on 3/12/2025.
//

#include "Book.h"

Book::Book()
{
    title   = "Unknown";
    author  = "Unknown";
    pubYear = 0;
}


void Book::SetBookInfo(string t, string a, int pY)
{
    title   = t;
    author  = a;
    pubYear = pY;
}

void Book::DisplayBookInfo() const
{
    for (int i = 0; i < numBooks; i++)
    {
        cout << "Book #"            << (i + 1) << "\n\tTitle: "           << books[i].title   << endl;
        cout << "Author #"          << (i + 1) << "\n\tAuthor: "          << books[i].author  << endl;
        cout << "Publishing Year #" << (i + 1) << "\n\tPublishing Year: " << books[i].pubYear << endl << endl;
    }
}