#include <iostream>
using namespace std;

bool isSymmetrical(int num)
{
    int original = num;
    int reverse = 0;

    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}

int main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (isSymmetrical(num))
        cout << "The number is symmetrical.";
    else
        cout << "The number is not symmetrical.";

    return 0;
}