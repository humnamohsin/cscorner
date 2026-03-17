#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    string book = "";

    while (choice != 5) {
        cout << "\n--- Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View Book\n";
        cout << "3. Borrow Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> book;
            cout << "You added a book: " << book << endl;
        }
        else if (choice == 2) {
            if (book == "")
                cout << "No book available!\n";
            else
                cout << "Book: " << book << endl;
        }
        else if (choice == 3) {
            if (book == "")
                cout << "No book to borrow!\n";
            else {
                cout << "You borrowed: " << book << endl;
                book = "";
            }
        }
        else if (choice == 4) {
            cout << "Book issued successfully!\n";
        }
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}