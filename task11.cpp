#include <iostream>
using namespace std;
main(){
      cout<<"Enter your bill: ";
      int bill;
      cin>>bill;
      if(bill<=5000){
        cout<<"There will be 5% discount in bill.";
      }
      else{
        cout<<"There will be 10% discount in bill.";
      }
      int discount;
      discount=((discount/bill) * 100);
      cout<<"Discount is:"<<discount<<" ";

      }