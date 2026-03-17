#include <iostream>
using namespace std;

int main()
{
    long long num;
    int digit;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the digit to find frequency: ";
    cin >> digit; 

    while(num > 0)
    {
        int rem = num % 10;

        if(rem == digit)
        {
            count++;
        }

        num = num / 10;
    }

    cout << "Frequency of digit in number is: " << count;

    return 0;
}