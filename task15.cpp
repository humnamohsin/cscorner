#include <iostream>
using namespace std;
main(){
      string name1,name2,name3;
      int age1,age2,age3;
      cout<<"Enter the first brother's name: ";
      cin>>name1;
      cout<<"Enter the first brother's age: ";
      cin>>age1;
      cout<<"Enter the second brother's name: ";
      cin>>name2;
      cout<<"Enter the second brother's age: ";
      cin>>age2;
      cout<<"Enter the third brother's name: ";
      cin>>name3;
      cout<<"Enter the third brother's age: ";
      cin>>age3;
      if(age1<age2){
        if(age1<age3){
            cout<<name1<<"is youngest";
      }
      }
      else if(age2<age3){
        cout<<name2<<"is youngest";
      }
      else{
        cout<<name3<<"is youngest";
      }

      }