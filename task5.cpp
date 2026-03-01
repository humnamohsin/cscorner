#include <iostream>
using namespace std;
main(){
      cout<<"Enter the charge in coulombs: ";
      int charge;
      cin>>charge;
      cout<<"Enter the time in seconds: ";
      int time;
      cin>>time;
      float current;
      current=charge/time;
      cout<<"Current is:"<<current<<" Amperes";
      }