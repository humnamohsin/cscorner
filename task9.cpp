#include <iostream>
using namespace std;
main(){
    float money;
    int year;
    cin>>money>>year;
    float total_spent = 0;

    for(int i = 1800 ; i <= year ; i++)
    {
        int age = i - 1800;
        if(i % 2 == 0){
            total_spent = total_spent + 12000;
        }
        else{
            total_spent = total_spent + 12000 + (50 * age);
        }
    }
    if(money >= total_spent)
    {
        cout<<"Yes!He will live a carefree life and will have";
        cout<<(money - total_spent)<<"dollars left.";
    }
    else{
        cout<<"He will need ";
        cout<<(total_spent - money)<<"dollars to survive.";
    }

}