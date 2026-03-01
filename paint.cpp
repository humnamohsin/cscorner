#include <iostream>

using namespace std;

int main() {
    int n, w, h;
    int wallArea, result;

    cout << "Enter total paint: ";
    cin >> n;

    cout << "Enter wall width: ";
    cin >> w;

    cout << "Enter wall height: ";
    cin >> h;

    wallArea = w * h;
    result = n / wallArea;

    cout << "Complete walls: " << result << endl;

    return 0;
}