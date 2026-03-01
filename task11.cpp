#include <iostream>
using namespace std;
main(){
      cout<<"Enter the number of wins(1 win=3 points): ";
      int wins;
      cin>>wins;
      cout<<"Enter the number of draws(1 draw=1 point): ";
      int draws;
      cin>>draws;
      cout<<"Enter the number of losses(1 loss=0 points): ";
      int losses;
      cin>>losses;
      int points;
      points=(wins*3)+(draws*1)+(losses*0);
      cout<<"Points are:"<<points<<" ";
      }
      
        
