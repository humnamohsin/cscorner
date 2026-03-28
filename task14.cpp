#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of flights: ";
    cin >> n;

    int flights[100];
    string destination[100];
    int seats[100];

    // Input
    for(int i = 0; i < n; i++)
    {
        cout << "Enter flight number for flight " << i+1 << ": ";
        cin >> flights[i];

        cout << "Enter destination for flight " << flights[i] << ": ";
        cin >> destination[i];

        cout << "Enter number of seats for flight " << flights[i] << ": ";
        cin >> seats[i];
    }

    // Display all flights
    cout << "\nFlight Information:\n";
    cout << "-------------------\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Flight " << flights[i] << " to " << destination[i]
             << " has " << seats[i] << " seats available." << endl;
    }

    // Flights with less than 5 seats
    cout << "\nFlights with less than 5 seats available:\n";
    cout << "-------------------\n";

    for(int i = 0; i < n; i++)
    {
        if(seats[i] < 5)
        {
            cout << "Flight " << flights[i] << " to " << destination[i]
                 << " has only " << seats[i] << " seats left!" << endl;
        }
    }

    return 0;
}