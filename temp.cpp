#include <iostream>
using namespace std;
main(){
      cout<<"Enter temperature of first city: ";
      float temp1;
      cin>>temp1;
      cout<<"Enter temperature of second city: ";
      float temp2;
      cin>>temp2;
      if(temp2-temp1 < 10){
        cout<<"Difference is not too big.";
      }
      else{
        cout<<"Difference is too big.";
      }
      cout<<"Program ends"<<endl;

      }