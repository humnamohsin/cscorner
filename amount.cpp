#include <iostream>
using namespace std;
main(){
      int red,white,tulips;
      float total,discount_price;
      cout<<"Enter the number of red roses: ";
      cin>>red;
      cout<<"Enter the number of whiterose: ";
      cin>>white;
      cout<<"Enter the number of tulips: ";
      cin>>tulips;
      total = (red*2.00)+(white*4.10)+(tulips*2.50);
      cout<<"Original price"<<total<<endl;
      if(total>200){
        discount_price = total-(total*0.20);
        cout<<"Price after discount:"<<discount_price;
      }

      }