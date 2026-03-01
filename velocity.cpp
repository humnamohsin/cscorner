#include <iostream>
using namespace std;
main(){
      cout<<"Enter initial velocity(m/s): ";
      int Vi;
      cin>>Vi;
      cout<<"Enter acceleration: ";
      int a;
      cin>>a;
      cout<<"Enter time: ";
      int t;
      cin>>t;
      int Vf;
      Vf=Vi+(a*t);
      cout<<"Final velocity is:"<<Vf<<" m/s ";
      }