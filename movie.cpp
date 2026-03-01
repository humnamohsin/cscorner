#include <iostream>

using namespace std;

int main() {
    char movieName[50];
    int adultTicketPrice, childTicketPrice;
    int adultTicketsSold, childTicketsSold;
    int donationPercentage, totalGross, amountDonated, remainingAmount;

    cout << "Enter movie name: ";
    cin >> movieName;

    cout << "Enter adult ticket price: ";
    cin >> adultTicketPrice;

    cout << "Enter child ticket price: ";
    cin >> childTicketPrice;

    cout << "Enter adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter child tickets sold: ";
    cin >> childTicketsSold;

    cout << "Enter donation percentage: ";
    cin >> donationPercentage;

    totalGross = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
    amountDonated = (totalGross * donationPercentage) / 100;
    remainingAmount = totalGross - amountDonated;

    cout << endl;
    cout << "Movie: " << movieName << endl;
    cout << "Total: " << totalGross << endl;
    cout << "Donated: " << amountDonated << endl;
    cout << "Remaining: " << remainingAmount << endl;

    return 0;
}