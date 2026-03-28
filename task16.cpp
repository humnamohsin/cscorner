#include <iostream>
using namespace std;
main(){
      char word[100];

      cout<<"Enter a word: ";
      cin>>word;

      cout<<"\nAlphabets and their positions:\n";

      for(int i = 0 ; word[i] != '\0' ; i++)
      {
        cout<<word[i]<<" is found at position "<<i<<endl;
      }
    }