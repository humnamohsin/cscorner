#include <iostream>
using namespace std;
main(){
      string shape;
      cin>>shape;
      if(shape == "Square" || shape == "square"){
        float s;
        cin>>s;
        cout<< s*s;
      }
      else if(shape == "Rectangle" || shape == "rectangle"){
        float l,w;
        cin>>l>>w;
        cout<< l*w;
      }
      else if(shape == "Circle" || shape == "circle"){
        float r;
        cin>>r;
        cout<< 3.14159 * r * r;
      }
      else if(shape == "Triangle" || shape == "triangle"){
        float b,h;
        cin>>b>>h;
        cout<< 0.5 * b * h;
      }
      
      }