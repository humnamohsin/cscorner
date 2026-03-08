#include <iostream>
using namespace std;
main(){
      int salary=10000;
      int laptop_price=50000;
      int advance_percent=50;
      int months=6;

      int advance_per_month=(salary*advance_percent)/100;
      int total_advance=advance_per_month*months;

      if(total_advance >= laptop_price){
        cout<<"Ali can buy the laptop with advance salary."<<endl;
      }
      else{
        int months_required=laptop_price/advance_per_month;
        cout<<"Months required to buy laptop:"<<months_required<<endl;
      }


      }