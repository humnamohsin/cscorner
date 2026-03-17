#include <iostream>
using namespace std;
main(){
    cout<<"Multiplication Table of 24: "<<endl;
      int multiple1;
      int table1 = 24;
      for(int num = 1 ; num <= 10 ; num = num + 1){
        multiple1 = table1 * num;
        cout << table1 <<" * " << num <<" = " << multiple1 << endl;
      }
      cout<<"Multiplication Table of 50: "<<endl;
      int multiple2;
      int table2 = 50;
      for(int num = 1 ; num <= 10 ; num = num + 1){
        multiple2 = table2 * num;
        cout << table2 <<" * " << num <<" = " << multiple2 << endl;
      }
      cout<<"Multiplication Table of 29: "<<endl;
      int multiple3;
      int table3 = 29;
      for(int num = 1 ; num <= 10 ; num = num + 1){
        multiple3 = table3 * num;
        cout << table3 <<" * " << num <<" = " << multiple3 << endl;
      }
}