#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate and display roots
void calculateRoots(float a, float b, float c)
{
    float D = (b * b) - (4 * a * c);

    if (D > 0)
    {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);

        cout << "Two Real Roots:\n";
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }
    else if (D == 0)
    {
        float root = -b / (2 * a);

        cout << "One Real Root:\n";
        cout << "x = " << root << endl;
    }
    else
    {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);

        cout << "Complex Roots:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}

int main()
{
    float a, b, c;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "This is not a quadratic equation!";
    }
    else
    {
        calculateRoots(a, b, c); // function call
    }

    return 0;
}
