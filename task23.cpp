#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isSpecial = true;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) // even index
        {
            if(arr[i] % 2 != 0)
            {
                isSpecial = false;
                break;
            }
        }
        else // odd index
        {
            if(arr[i] % 2 == 0)
            {
                isSpecial = false;
                break;
            }
        }
    }

    if(isSpecial)
        cout << "The array is special";
    else
        cout << "The array is not special";

    return 0;
}