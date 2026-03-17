#include <iostream>
using namespace std;
main(){
      int age,machine_price,toy_price;
      cin>>age>>machine_price>>toy_price;
      int toys = 0;
      int money = 0;
      int even_money = 10;

      for(int i = 1 ; i <= age ; i++)
      {
        if(i % 2 == 0){
            money = money + (even_money - 1);
            even_money = even_money + 10; 
        }
        else{
            toys = toys + 1;
        }
      }
      int total = money + (toys * toy_price);
      if(total >= machine_price)
      {
        cout<<"Yes!"<<endl;
        cout<<total - machine_price;
      }
      else{
        cout<<"No!"<<endl;
        cout<<machine_price - total;
      }

}