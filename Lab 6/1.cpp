#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string publisher;

public:
    Book(string t, string a, string p)
    {
        title = t;
        author = a;
        publisher = p;
    }

    const string getTitle() { return title; } // sir basit asked us to make getter and display functions constant
    const string getAuthor() { return author; }
    const string getPublisher() { return publisher; }

    const void display1()
    {
        cout << "Hey, look at me! I exist!" << endl;
    }
};

class FictionBook : public Book
{
    string genre;
    string protagonist;

public:
    FictionBook(string t, string a, string p, string g, string protag) : Book(t, a, p)
    {
        genre = g;
        protagonist = protag;
    }

    const void display2()
    {
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Publisher: " << getPublisher() << endl;
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main()
{
    FictionBook book("Pak's Struggles", "Zahid", "NewYork Times", "Absolute Cinema", "Robert Downey Jr");
    book.display2();
    return 0;
}
