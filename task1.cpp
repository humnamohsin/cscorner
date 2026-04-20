#include <iostream>
using namespace std;

void add(int number1, int number2);

int main()
{
    int number1,number2;
    cout<<"Enter the first  number: ";
    cin >> number1;
    cout<<"Enter the second number: ";
    cin >> number2;
    add(number1,number2);

    return 0;
}
void add(int number1,int number2)
{
    cout<< "Sum: " << number1 + number2;
}