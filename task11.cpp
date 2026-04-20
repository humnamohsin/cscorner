#include <iostream>
using namespace std;

string timeTravel(int hours, int minutes)
{
    minutes += 15;

    if (minutes >= 60)
    {
        minutes -= 60;
        hours++;
    }

    if (hours >= 24)
        hours = 0;

    return to_string(hours) + ":" + to_string(minutes);
}

int main()
{
    int h, m;

    cout << "Enter hours: ";
    cin >> h;

    cout << "Enter minutes: ";
    cin >> m;

    cout << "Future time: " << timeTravel(h, m);

    return 0;
}