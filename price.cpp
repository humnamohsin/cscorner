#include <iostream>
using namespace std;
main(){
     cout<<"Enter the name of the country: ";
     string name;
     cin>>name;
     cout<<"Enter the ticket price in dollars: ";
     int price;
     cin>>price;
     cout<<"Enter discount: ";
     int discount;
     cin>>discount;
     int discount_price;
     discount_price=price*(1-(discount/100));
     cout<<"Total price after discount is:"<<discount_price<<" ";
      }