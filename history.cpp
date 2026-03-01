#include <iostream>

using namespace std;

int main() {
    int age, moves;
    float average;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter moves: ";
    cin >> moves;

    average = age / (moves + 1.0);

    cout << "Average years in house: " << average << endl;

    return 0;
}