#include <iostream>
using namespace std;

int main()
{
    int index = 5;

    string productName[1000] = {"pen", "book", "pencil", "eraser", "marker"};
    int productPrice[1000] = {20, 100, 10, 15, 50};
    int productStock[1000] = {50, 30, 100, 40, 20};

    while (true)
    {
        cout << "\n===== BUSINESS APPLICATION =====\n";
        cout << "1. Admin\n";
        cout << "2. Customer\n";
        cout << "3. View Products\n";
        cout << "4. Exit\n";

        cout << "Enter option: ";
        string option;
        cin >> option;

        // ---------------- ADMIN ----------------
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

                    // Show
                    if (adminOpt == "1")
                    {
                        cout << "Name\tPrice\tStock\n";
                        for (int i = 0; i < index; i++)
                        {
                            if (productName[i] != "")
                            {
                                cout << productName[i] << "\t" << productPrice[i] << "\t" << productStock[i] << endl;
                            }
                        }
                    }

                    // Add
                    else if (adminOpt == "2")
                    {
                        cout << "Enter name: ";
                        cin >> productName[index];

                        cout << "Enter price: ";
                        cin >> productPrice[index];

                        cout << "Enter stock: ";
                        cin >> productStock[index];

                        index++;

                        cout << "Product added!\n";
                    }

                    // Search
                    else if (adminOpt == "3")
                    {
                        string name;
                        cout << "Enter product name: ";
                        cin >> name;

                        bool found = false;

                        for (int i = 0; i < index; i++)
                        {
                            if (productName[i] == name)
                            {
                                cout << "Found: " << productName[i]
                                     << " Price: " << productPrice[i]
                                     << " Stock: " << productStock[i] << endl;

                                found = true;
                            }
                        }

                        if (!found)
                        {
                            cout << "Product not found!\n";
                        }
                    }

                    else if (adminOpt == "4")
                    {
                        break;
                    }

                    else
                    {
                        cout << "Invalid option!\n";
                    }
                }
            }
            else
            {
                cout << "Invalid login!\n";
            }
        }

        // ---------------- CUSTOMER ----------------
        else if (option == "2")
        {
            int totalBill = 0;

            while (true)
            {
                cout << "\n--- CUSTOMER MENU ---\n";
                cout << "1. View Products\n";
                cout << "2. Buy Product\n";
                cout << "3. Back\n";

                cout << "Enter option: ";
                string custOpt;
                cin >> custOpt;

                // View
                if (custOpt == "1")
                {
                    cout << "Name\tPrice\tStock\n";

                    for (int i = 0; i < index; i++)
                    {
                        if (productName[i] != "")
                        {
                            cout << productName[i] << "\t" << productPrice[i] << "\t" << productStock[i] << endl;
                        }
                    }
                }

                // Buy
                else if (custOpt == "2")
                {
                    string name;
                    int qty;

                    cout << "Enter product name: ";
                    cin >> name;

                    cout << "Enter quantity: ";
                    cin >> qty;

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (productName[i] == name)
                        {
                            found = true;

                            if (productStock[i] >= qty)
                            {
                                int cost = productPrice[i] * qty;
                                productStock[i] -= qty;
                                totalBill += cost;

                                cout << "Added to bill: " << cost << endl;
                            }
                            else
                            {
                                cout << "Not enough stock!\n";
                            }
                        }
                    }

                    if (!found)
                    {
                        cout << "Product not found!\n";
                    }
                }

                else if (custOpt == "3")
                {
                    cout << "Total Bill: " << totalBill << endl;
                    break;
                }

                else
                {
                    cout << "Invalid option!\n";
                }
            }
        }

        // ---------------- VIEW ----------------
        else if (option == "3")
        {
            cout << "Name\tPrice\tStock\n";

            for (int i = 0; i < index; i++)
            {
                if (productName[i] != "")
                {
                    cout << productName[i] << "\t" << productPrice[i] << "\t" << productStock[i] << endl;
                }
            }
        }

        // ---------------- EXIT ----------------
        else if (option == "4")
        {
            break;
        }

        else
        {
            cout << "Invalid option!\n";
        }
    }

    cout << "Program ended.\n";
}