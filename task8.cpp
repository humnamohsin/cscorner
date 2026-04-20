#include <iostream>
using namespace std;

string checkAlphabetCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return "You have entered Capital " + string(1, ch);
    else
        return "You have entered small " + string(1, ch);
}

int main()
{
    char ch;
    cout << "Enter a character (A/a): ";
    cin >> ch;

    cout << checkAlphabetCase(ch);

    return 0;
}