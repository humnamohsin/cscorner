#include <iostream>
using namespace std;
main(){
       cout<<"Enter name: ";
       string name;
       cin>>name;
       cout<<"Enter Matric marks(out of 1100): ";
       int marks1;
       cin>>marks1;
       cout<<"Enter Inter marks(out of 555): ";
       int marks2;
       cin>>marks2;
       cout<<"Enter ECAT marks(out of 400): ";
       int marks3;
       cin>>marks3;
       float aggregate;
       aggregate=(marks1/1100.0)*100*0.10+(marks2/555.0)*100*0.40+(marks3/400.0)*100*0.50 ;
       cout<<"Aggregate is:"<<aggregate<<" percentage";
       }
     
       