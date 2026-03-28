#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }

    int sum=0;

    for(int i = 0 ; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"The sum of the numbers is: "<<sum<<endl;

    return 0;
}