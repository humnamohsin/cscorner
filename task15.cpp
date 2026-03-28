#include <iostream>
using namespace std;

int main() {
    string books[50];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Library System ---\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. View Books\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                cout << "Enter book name: ";
                cin >> books[count];
                cout << "Book Added: " << books[count] << endl;
                count++;
                break;
            }

            case 2:
            case 4: {
                if (count == 0) {
                    cout << "No books available\n";
                } else {
                    cout << "Books List:\n";
                    for (int i = 0; i < count; i++) {
                        cout << i + 1 << ". " << books[i] << endl;
                    }
                }
                break;
            }

            case 3: {
                string name;
                int found = 0;

                cout << "Enter book to borrow: ";
                cin >> name;

                for (int i = 0; i < count; i++) {
                    if (books[i] == name) {
                        cout << "Book Borrowed: " << name << endl;
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    cout << "Book not found\n";
                }
                break;
            }

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}


