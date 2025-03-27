#include <iostream>
using namespace std;

class Media 
{
protected:
    string title, pubDate, uniqueID, publisher;

public:
    Media(string t, string p, string id, string pb) 
    {
        title = t;
        pubDate = p;
        uniqueID = id;
        publisher = pb;
    }

    virtual void displayInfo() 
    {
        cout << "Title: " << title << " | Published: " << pubDate << endl;
        cout << "ID: " << uniqueID << " | Publisher: " << publisher << endl;
    }

    virtual void checkOut() 
    {
        cout << title << " has been checked out." << endl;
    }

    virtual void returnItem() 
    {
        cout << title << " has been returned." << endl;
    }
};

class Book : public Media 
{
    string author, ISBN;
    int pages;

public:
    Book(string t, string p, string id, string pb, string a, string i, int pg) : Media(t, p, id, pb) 
    {
        author = a;
        ISBN = i;
        pages = pg;
    }

    void displayInfo() override 
    {
        Media::displayInfo();
        cout << "Author: " << author << " | ISBN: " << ISBN << " | Pages: " << pages << endl;
    }
};

class DVD : public Media 
{
    string director;
    double duration;
    string rating;

public:
    DVD(string t, string p, string id, string pb, string d, double dur, string r) : Media(t, p, id, pb) 
    {
        director = d;
        duration = dur;
        rating = r;
    }

    void displayInfo() override 
    {
        Media::displayInfo();
        cout << "Director: " << director << " | Duration: " << duration << " hrs | Rating: " << rating << endl;
    }
};

int main() 
{
    Book saad("The Alchemist", "1988", "B101", "HarperCollins", "Paulo Coelho", "978-0061122415", 208);
    DVD muqeet("Inception", "2010", "D202", "Warner Bros", "Christopher Nolan", 2.8, "PG-13");

    saad.displayInfo();
    saad.checkOut();
    saad.returnItem();

    cout << "\n";

    muqeet.displayInfo();
    muqeet.checkOut();
    muqeet.returnItem();

    return 0;
}
