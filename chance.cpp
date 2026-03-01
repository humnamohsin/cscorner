#include <iostream>
using namespace std;
main(){
      cout<<"Enter imposter count: ";
      int i;
      cin>>i;
      cout<<"Enter player count: ";
      int p;
      cin>>p;
      int n;
      n=100*(i/p);
      cout<<"Chances of being an imposter are:"<<n<<" % ";
      }