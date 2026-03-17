#include <iostream>
using namespace std;


int findGCD(int a, int b)
{
    int gcd = 1;
    int limit;

    if(a < b){
        limit = a;
    }
    else{
        limit = b;
    }
    for(int i = 1; i <= limit; i++)
    {
        if(a % i == 0)
        {
            if(b % i == 0)
            {
                gcd = i;
            }
        }
    }

    return gcd;
}

int findLCM(int a, int b)
{
    int gcd = findGCD(a,b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << findGCD(a,b) << endl;
    cout << "LCM = " << findLCM(a,b) << endl;

    return 0;
}
