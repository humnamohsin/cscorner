#include <iostream>
using namespace std;

string numberToText(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                      "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num >= 1 && num <= 9)
        return ones[num];

    else if (num >= 10 && num <= 19)
        return teens[num - 10];

    else
        return tens[num / 10] + ones[num % 10];
}

int main()
{
    int num;
    cout << "Enter a number (1-99): ";
    cin >> num;

    cout << numberToText(num);

    return 0;
}