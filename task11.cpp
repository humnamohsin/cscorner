#include <iostream>
using namespace std;
main(){
      int n;
      cout<<"Enter the number of customers:  ";
      cin>>n;
      string names[n];
      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout<<"Enter the names of customers "<<i<<":  ";
          cin>>names[i];
      }
      char letter;
      cout<<"Enter a letter to search for:  ";
      cin>>letter;
      cout<<"Total names that start with the'letter' "<<letter<<" are:  ";
      int count = 0;
        for(int i = 0 ; i < n ; i = i + 1)
        {
            if(names[i][0] == letter)
            {
                count = count + 1;
            }
        }
      cout<<count;

}