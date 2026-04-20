#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base_num , exponent;
    cout<<"Enter the Base number: ";
    cin>>base_num;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    cout<<base_num<<  " raised to the power "<<exponent<<" is: "<<pow(base_num,exponent); 
    return 0;
}