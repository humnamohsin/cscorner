#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
    int sum, product, diff, result;

    cout << "Enter first 5 numbers: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    sum = n1 + n2 + n3 + n4 + n5;

    cout << "Enter next 5 numbers: " << endl;
    cin >> n6 >> n7 >> n8 >> n9 >> n10;
    product = n6 * n7 * n8 * n9 * n10;

    cout << "Enter last 5 numbers: " << endl;
    cin >> n11 >> n12 >> n13 >> n14 >> n15;
    diff = n11 - n12 - n13 - n14 - n15;

    result = (sum + product) - diff;

    cout << "Final Result: " << result << endl;

    return 0;
}