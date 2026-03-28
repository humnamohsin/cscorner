#include <iostream>
using namespace std;
main(){
      int n;
      cout<<"Enter the number of elements:  ";
      cin>>n;
      int arr[n];
      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout<<"Enter element "<<i<<":  ";
          cin>>arr[i];
      }

      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout<<"Element "<<i<<" is: "<<arr[i]<<endl;
      }
    }

  