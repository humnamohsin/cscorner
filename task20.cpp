#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float interest = 0;

    if (balance < 10000)
        interest = 0.05;
    else if (balance <= 50000)
        interest = 0.07;
    else
        interest = 0.10;

    if (years >= 3)
        interest += 0.02;

    float updatedBalance = balance + (balance * interest);

    return updatedBalance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Years: ";
    cin >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years);

    return 0;
}
  