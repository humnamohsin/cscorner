#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers)
{
    // 10% days training
    int trainingDays = days * 0.1;
    int workingDays = days - trainingDays;

    // total working hours
    int totalHours = workingDays * workers * 10;

    if (totalHours >= neededHours)
    {
        return "Yes! " + to_string(totalHours - neededHours) + " hours left.";
    }
    else
    {
        return "Not enough time! " + to_string(neededHours - totalHours) + " hours needed.";
    }
}

int main()
{
    int neededHours, days, workers;

    cout << "Enter needed hours: ";
    cin >> neededHours;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter number of workers: ";
    cin >> workers;

    cout << projectTimeCalculation(neededHours, days, workers);

    return 0;
}