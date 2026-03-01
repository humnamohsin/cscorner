#include <iostream>
using namespace std;
main(){
      cout<<"Enter imposters: ";
      int i;
      cin>>i;
      cout<<"Enter players: ";
      int p;
      cin>>p;
      int chances;
      chances=100*(i/p);
      cout<<"Chances of being an imposter are:"<<chances<<" % ";
      }