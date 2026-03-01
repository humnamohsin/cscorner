#include <iostream>
using namespace std;
main(){
      cout<<"Enter minutes: ";
      int minutes;
      cin>>minutes;
      cout<<"Enter frames per second: ";
      int fps;
      cin>>fps;
      int frames;
      frames=minutes*60*fps;
      cout<<"Total no. of frames are:"<<frames<<" ";
      }