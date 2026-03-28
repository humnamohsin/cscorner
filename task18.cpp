#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a word: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == 'z')      // For lowercase letters                                                                          
        {
            str[i] = 'a';
        }
        else if (str[i] == 'Z')    // For uppercase letters
        {
            str[i] = 'A';
        }
        else {
            str[i] = str[i] + 1;  // move to next letter
        }
    }

    cout << "Updated string: " << str;

    return 0;
}