#include "Book.h"



int main()
{
    int numBooks = 0;

    cout << "Input the number of books you'd like to enter: ";
    cin  >> numBooks;
    cin.ignore();


    Book *books = new Book[numBooks];


    for (int i = 0; i < numBooks; i++)
    {
        cout << "Enter title for book #" << (i + 1) << ": ";
        getline(cin, books->title);

        cout << "Enter author for book #" << (i + 1) << ": ";
        getline(cin, books[i].author);

        cout << "Enter publishing year for book #" << (i + 1) << ": ";
        cin  >> books[i].pubYear;
        cin.ignore();

        books[i].SetBookInfo(books->title, books->author, books->pubYear);
    }

    for (int i = 0; i < numBooks; i++)
    {
        books[i].DisplayBookInfo(numBooks, books);
    }

    return 0;
}