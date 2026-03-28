#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    

    int arr1[100];

    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    

    int arr2[100];

    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int result[200];  // combined array

    int mid = n1 / 2;
    int k = 0;

    // First half of arr1
    for(int i = 0; i < mid; i++) {
        result[k++] = arr1[i];
    }

    // Insert arr2
    for(int i = 0; i < n2; i++) {
        result[k++] = arr2[i];
    }

    // Remaining half of arr1
    for(int i = mid; i < n1; i++) {
        result[k++] = arr1[i];
    }

    // Output result
    cout << "Resulting array:\n";
    for(int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }

    return 0;
}