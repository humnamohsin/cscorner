#include <iostream>

using namespace std;

int main() {
    int bagWeight, bagCost, areaCovered;
    int costPerPound, costPerSquareFoot;

    cout << "Enter the weight: ";
    cin >> bagWeight;

    cout << "Enter the cost: ";
    cin >> bagCost;

    cout << "Enter the area: ";
    cin >> areaCovered;

    costPerPound = bagCost / bagWeight;
    costPerSquareFoot = bagCost / areaCovered;

    cout << "Cost per pound: " << costPerPound << endl;
    cout << "Cost per square foot: " << costPerSquareFoot << endl;

    return 0;
}