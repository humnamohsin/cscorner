#include <iostream>
using namespace std;

string pyramidVolume(float l, float w, float h, string unit)
{
    // volume in meters
    float volume = (l * w * h) / 3;

    if (unit == "millimeters")
        volume *= (1000 * 1000 * 1000);
    else if (unit == "centimeters")
        volume *= (100 * 100 * 100);
    else if (unit == "kilometers")
        volume /= (1000 * 1000 * 1000);
    // meters = no change

    return to_string(volume) + " cubic " + unit;
}

int main()
{
    float l, w, h;
    string unit;

    cout << "Enter length, width, height (in meters): ";
    cin >> l >> w >> h;

    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    cout << pyramidVolume(l, w, h, unit);

    return 0;
}