#include "ZahidBook.h"

class Library 
{
private:
    Book* books[10];
    int count;

public:
    Library() 
    {
        count = 0;
    }

    void addBook(Book* b) 
    {
        if (count < 10) 
        {
            books[count] = b;
            count++;
        }
    }

    void searchBook(string keyword) 
    {
        for (int i = 0; i < count; i++) 
        {
            if (books[i]->getTitle() == keyword || books[i]->getAuthor() == keyword || books[i]->getISBN() == keyword) 
            {
                cout << "Book Found:\n";
                cout << "Title: " << books[i]->getTitle() << endl;
                cout << "Author: " << books[i]->getAuthor() << endl;
                cout << "ISBN: " << books[i]->getISBN() << endl;
                return;
            }
        }

        cout << "Book not found.\n";
    }
};

int main() 
{
    Book book1("C++ Basics", "Bjarne", "123456");
    Library lib;
    lib.addBook(&book1);

    lib.searchBook("C++ Basics");

    return 0;
}
