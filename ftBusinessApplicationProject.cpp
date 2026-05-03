#include <iostream>
using namespace std;

// GLOBAL DATA
int indexCount = 5;

string productName[1000] = {"pen", "book", "pencil", "eraser", "marker"};
int productPrice[1000] = {20, 100, 10, 15, 50};
int productStock[1000] = {50, 30, 100, 40, 20};

// -------- FUNCTIONS --------

void showProducts()
{
    cout << "\nName\tPrice\tStock\n";
    for (int i = 0; i < indexCount; i++)
    {
        if (productName[i] != "")
        {
            cout << productName[i] << "\t" << productPrice[i] << "\t" << productStock[i] << endl;
        }
    }
}

void addProduct()
{
    cout << "Enter product name: ";
    cin >> productName[indexCount];

    cout << "Enter price: ";
    cin >> productPrice[indexCount];

    cout << "Enter stock: ";
    cin >> productStock[indexCount];

    indexCount++;
    cout << "Product added successfully!\n";
}

void searchProduct()
{
    string name;
    cout << "Enter product name to search: ";
    cin >> name;

    for (int i = 0; i < indexCount; i++)
    {
        if (productName[i] == name)
        {
            cout << "Found -> " << productName[i]
                 << " Price: " << productPrice[i]
                 << " Stock: " << productStock[i] << endl;
            return;
        }
    }
    cout << "Product not found!\n";
}

void buyProduct()
{
    string name;
    int qty;

    cout << "Enter product name: ";
    cin >> name;

    cout << "Enter quantity: ";
    cin >> qty;

    for (int i = 0; i < indexCount; i++)
    {
        if (productName[i] == name)
        {
            if (productStock[i] >= qty)
            {
                int cost = productPrice[i] * qty;
                productStock[i] -= qty;

                cout << "Purchase successful! Total cost = " << cost << endl;
                return;
            }
            else
            {
                cout << "Not enough stock!\n";
                return;
            }
        }
    }

    cout << "Product not found!\n";
}

// -------- MAIN --------

int main()
{
    while (true)
    {
        cout << "\n====== BUSINESS APPLICATION ======\n";
        cout << "1. Admin Panel\n";
        cout << "2. Customer Panel\n";
        cout << "3. View Products\n";
        cout << "4. Exit\n";

        cout << "Enter your option: ";
        string option;
        cin >> option;

        // ---------- ADMIN ----------
        if (option == "1")
        {
            string username, password;

            cout << "Enter username: ";
            cin >> username;

            cout << "Enter password: ";
            cin >> password;

            if (username == "admin" && password == "123")
            {
                cout << "Login successful!\n";

                while (true)
                {
                    cout << "\n--- ADMIN MENU ---\n";
                    cout << "1. Show Products\n";
                    cout << "2. Add Product\n";
                    cout << "3. Search Product\n";
                    cout << "4. Logout\n";

                    cout << "Enter option: ";
                    string adminOpt;
                    cin >> adminOpt;

                    if (adminOpt == "1")
                        showProducts();

                    else if (adminOpt == "2")
                        addProduct();

                    else if (adminOpt == "3")
                        searchProduct();

                    else if (adminOpt == "4")
                        break;

                    else
                        cout << "Invalid option!\n";
                }
            }
            else
            {
                cout << "Invalid login!\n";
            }
        }

        // ---------- CUSTOMER ----------
        else if (option == "2")
        {
            while (true)
            {
                cout << "\n--- CUSTOMER MENU ---\n";
                cout << "1. View Products\n";
                cout << "2. Buy Product\n";
                cout << "3. Back\n";

                cout << "Enter option: ";
                string custOpt;
                cin >> custOpt;

                if (custOpt == "1")
                    showProducts();

                else if (custOpt == "2")
                    buyProduct();

                else if (custOpt == "3")
                    break;

                else
                    cout << "Invalid option!\n";
            }
        }

        // ---------- VIEW ----------
        else if (option == "3")
        {
            showProducts();
        }

        // ---------- EXIT ----------
        else if (option == "4")
        {
            break;
        }

        else
        {
            cout << "Invalid option!\n";
        }
    }

    cout << "\nProgram ended.\n";
}