#include <iostream>
using namespace std;
main(){
      int num1,num2,result;
      char op;
      cout<<"Welcome to the calculator"<<endl;
      cout<<"Enter the first number: ";
      cin>>num1;
      cout<<"Enter the operator: ";
      cin>>op;
      cout<<"Enter the second number: ";
      cin>>num2;
      if(op == '+'){
        result=num1-num2;
        cout<<num1<< "-" <<num2<< "=" <<result;
      }
      else if(op == '-'){
        result=num1+num2;
        cout<<num1<< "+" <<num2<< "=" <<result;
      }
      else if(op == '/'){
        result=num1*num2;
        cout<<num1<< "*" <<num2<< "=" <<result;
      }
      else if(op == '*'){
        result=num1/num2;
        cout<<num1<< "/" <<num2<< "=" <<result;
      }
      else{
        cout<<"Invalid operator";
      }
      }