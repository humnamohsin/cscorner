#include <iostream>
using namespace std;
main(){
      int n;
      cout<<"Enter the number of products:  ";
      cin>>n;
      string names[n];
      int prices[n];
      int quantity[n];
      int Total_value[n];
      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout<<"Enter name of product "<<i+1<<" :  ";
          cin>>names[i];
          cout<<"Enter price of ($)product "<<i+1<<" :  $";
          cin>>prices[i];
          cout<<"Enter quantity of product "<<i+1<<" :  ";
          cin>>quantity[i];
      }

      cout<<"Product Inventory Report"<<endl;
      cout<<"------------------------"<<endl;
      for(int i = 0 ; i < n ; i = i + 1)
      {
          cout <<names[i] <<":"" $ "<< prices[i] <<  " , " << quantity[i] <<" in stock" " , "" $ "<<Total_value<<":" <<prices[i]*quantity[i]<<endl;
      }

}