#include <iostream>
using namespace std;
main(){
      string my_password,user_enter;
      my_password="Pass#@12345";
      cout<<"Enter the password: ";
      cin>>user_enter;
      if(my_password==user_enter){
        cout<<"Wow!You have cracked the code.";
      }
      else{
        cout<<"Sorry,Please try again.";
      }
      }