#include <iostream>
using namespace std;
main(){
      int holidays;
      int working_days;
      int playtime;
      int difference;
      int hours,minutes;
      cout<<"Enter the number of holidays: ";
      cin>>holidays;
      working_days = 365-holidays;
      playtime = (working_days*63)+(holidays*127);
      if(playtime <= 30000){
        difference = 30000-playtime;
        hours = difference/60;
        minutes = difference % 60;

        cout<<"Tom sleeps well"<<endl;
        cout<<hours<<"hours and"<<minutes<<"minutes less for play";
      }
      else{
        difference = 30000-playtime;
        hours = difference/60;
        minutes = difference % 60;

        cout<<"Tom will run away" <<endl;
        cout<<hours<<"hours and "<<minutes<<"minutes for play";
      }
      }