#include <iostream>
#include <vector>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    bool isIssued;

    Book(int id, string t) {
        bookID = id;
        title = t;
        isIssued = false;
    }

    void display() {
        cout << "Book ID: " << bookID 
             << " | Title: " << title 
             << " | Status: " << (isIssued ? "Issued" : "Available") 
             << endl;
    }
};

class Member {
public:
    int memberID;
    string name;

    Member(int id, string n) {
        memberID = id;
        name = n;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(int id, string title) {
        books.push_back(Book(id, title));
        cout << "Book Added Successfully!\n";
    }

    void showBooks() {
        for (auto &b : books) {
            b.display();
        }
    }

    void issueBook(int id) {
        for (auto &b : books) {
            if (b.bookID == id) {
                if (!b.isIssued) {
                    b.isIssued = true;
                    cout << "Book Issued Successfully!\n";
                } else {
                    cout << "Book Already Issued!\n";
                }
                return;
            }
        }
        cout << "Book Not Found!\n";
    }

    void returnBook(int id) {
        for (auto &b : books) {
            if (b.bookID == id) {
                if (b.isIssued) {
                    b.isIssued = false;
                    cout << "Book Returned Successfully!\n";
                } else {
                    cout << "Book Was Not Issued!\n";
                }
                return;
            }
        }
        cout << "Book Not Found!\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title;

    while (true) {
        cout << "\n1. Add Book\n2. Show Books\n3. Issue Book\n4. Return Book\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                cout << "Enter Title: ";
                cin >> title;
                lib.addBook(id, title);
                break;

            case 2:
                lib.showBooks();
                break;

            case 3:
                cout << "Enter Book ID to Issue: ";
                cin >> id;
                lib.issueBook(id);
                break;

            case 4:
                cout << "Enter Book ID to Return: ";
                cin >> id;
                lib.returnBook(id);
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid Choice!\n";
        }
    }
}