#include <iostream>

using namespace std;

class Book {
    string title;
    string author;
    float price;
    public:
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }
    Book()
    {
        title = "untitled";
        author = "Anonymous";
        price = 0.0;
    }
    Book(string t)
    {
        title = t;
        author = "Unknown";
        price = 0.0;
    }
    Book (Book &b)
    {
        this->title = b.title;
        this->author = b.author;
        this->price = b.price;
    }
    void getDetails()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};


int main()
{
    Book b1;
    Book b2("Happy Day", "Muqeet", 1000);
    Book b3("Sad Day");
    Book b4(b2);
    b1.getDetails();
    b2.getDetails();
    b3.getDetails();
    b4.getDetails();
    return 0;
}
