#include <iostream>
using namespace std;

int main(){
    int n, num;
    cin >> n;

    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(num < 200)
        {
            p1++;
        }
        else if(num < 400)
        {
            p2++;
        }
        else if(num < 600)
        {
            p3++;
        }
        else if(num < 800)
        {
            p4++;
        }
        else{
            p5++;
        } 
    }

    // Calculate percentages
    float per1 = (p1 * 100.0) / n;
    float per2 = (p2 * 100.0) / n;
    float per3 = (p3 * 100.0) / n;
    float per4 = (p4 * 100.0) / n;
    float per5 = (p5 * 100.0) / n;

    // Print (may not always show exactly 2 decimal places)
    cout << per1 << "%" << endl;
    cout << per2 << "%" << endl;
    cout << per3 << "%" << endl;
    cout << per4 << "%" << endl;
    cout << per5 << "%" << endl;

    return 0;
}