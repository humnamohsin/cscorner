#include <iostream>

using namespace std;

int main() {
    float vegPrice, fruitPrice;
    int totalVeg, totalFruit;
    float totalCoins, totalRupees;

    cout << "Enter vegetable price per kg: ";
    cin >> vegPrice;

    cout << "Enter fruit price per kg: ";
    cin >> fruitPrice;

    cout << "Enter total kilograms of vegetables: ";
    cin >> totalVeg;

    cout << "Enter total kilograms of fruits: ";
    cin >> totalFruit;

    totalCoins = (vegPrice * totalVeg) + (fruitPrice * totalFruit);
    totalRupees = totalCoins / 1.94;

    cout << "Total earnings in Rupees: ";
    cout << totalRupees << endl;

    return 0;
}