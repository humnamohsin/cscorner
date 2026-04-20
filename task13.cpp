#include <iostream>
using namespace std;

void calculatePoolState(int V, int P1, int P2, float H)
{
    float totalWater = (P1 + P2) * H;

    if (totalWater <= V)
    {
        int poolPercent = (totalWater / V) * 100;

        int pipe1Percent = (P1 * H / totalWater) * 100;
        int pipe2Percent = (P2 * H / totalWater) * 100;

        cout << "The pool is " << poolPercent << "% full. ";
        cout << "Pipe 1: " << pipe1Percent << "%. ";
        cout << "Pipe 2: " << pipe2Percent << "%.";
    }
    else
    {
        float overflow = totalWater - V;

        cout << "For " << H << " hours the pool overflows with ";
        cout << overflow << " liters.";
    }
}

int main()
{
    int V, P1, P2;
    float H;

    cout << "Enter pool volume (liters): ";
    cin >> V;

    cout << "Enter flow rate of pipe 1: ";
    cin >> P1;

    cout << "Enter flow rate of pipe 2: ";
    cin >> P2;

    cout << "Enter hours: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);

    return 0;
}