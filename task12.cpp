#include <iostream>
using namespace std;
main(){
      cout<<"Enter the current world population: ";
      int Po;
      cin>>Po;
      cout<<"Enter the monthly birth rate: ";
      int n;
      cin>>n;
      cout<<"Enter the no.of decades(1 decade=10 years): ";
      int decades;
      cin>>decades;
      int Pt;
      Pt=(decades*10*12*n)+Po;
      cout<<"Population in decades will be:"<<Pt<<" ";
      } 
      
      
       