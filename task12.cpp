#include <iostream>
using namespace std;
main(){
      int n;
        cout<<"Enter the number of students:  ";
        cin>>n;
      string names[n];
      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout<<"Enter the names of students "<<i<<":  ";
          cin>>names[i];
      }
        for(int i = 0 ; i < n ; i = i + 1)
        {
            for(int j = 0 ; j < n-1 ; j = j + 1)
            {
                if(names[j] > names[j+1])
                {
                    string temp = names[j];
                    names[j] = names[j+1];
                    names[j+1] = temp;
                }
            }
        }
        cout<<"The names in alphabetical order are:  "<<endl;
        for(int i = 0 ; i < n ; i = i + 1)
        {
            cout<<names[i]<<endl;
        }

    }
