#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int publicationYear;
    string genre;
};

void displayBook(const Book& book) {
    cout << "\nTitle: " << book.title
         << "\nAuthor: " << book.author
         << "\nPublication Year: " << book.publicationYear
         << "\nGenre: " << book.genre << endl;
}

int main() {
    const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int bookCount = 0;

    // Example book (for demonstration)
    books[bookCount++] = {"The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 1979, "Science Fiction"};

    // Search by title
    string searchTitle;
    cout << "Enter title to search: ";
    getline(cin >> ws, searchTitle);

    bool found = false;
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].title == searchTitle) {
            displayBook(books[i]);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book not found." << endl;
    }

    // Add new book
    if (bookCount < MAX_BOOKS) {
        cout << "\nEnter new book title (or type 'done' to exit): ";
        getline(cin >> ws, books[bookCount].title);

        if (books[bookCount].title == "done") {
            cout << "No new book added.\n";
        } else {
            cout << "Enter author: ";
            getline(cin, books[bookCount].author);
            
            cout << "Enter publication year: ";
            while (!(cin >> books[bookCount].publicationYear)) {
                cout << "Invalid input. Enter a valid year: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cin.ignore(); // Consume leftover newline

            cout << "Enter genre: ";
            getline(cin, books[bookCount].genre);
            
            bookCount++;
            cout << "Book added successfully!\n";
        }
    }

    // Display all books
    cout << "\n--- All Books in Inventory ---" << endl;
    for (int i = 0; i < bookCount; ++i) {
        displayBook(books[i]);
        cout << "------------------------\n";
    }

    return 0;
}
