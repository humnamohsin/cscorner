#include <iostream>
using namespace std;
main(){
      cout<<"Enter the number of minutes: ";
      int minutes;
      cin>>minutes;
      cout<<"Enter the frames per second: ";
      int fps;
      cin>>fps;
      int frames;
      frames=minutes*60*fps;
      cout<<"Total no.of frames are:"<<frames<<" ";
      }