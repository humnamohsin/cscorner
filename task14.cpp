#include <iostream>
using namespace std;
main(){
      char ch;
      cout<<"Enter any character in lower case: ";
      cin>>ch;
      if(ch >= '0'){
        if(ch <= '9'){
            cout<<"It is a number";
        }
        }
        if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'){
            cout<<"It is a vowel";
        }
        else{
            cout<<"It is a consonant";
        }
                    
        }   