#include <iostream>
using namespace std;
main(){
      int pin , correctPin = 1234;
      int choice;
      int balance = 1000;  //initial balance
      int amount;
      int i;

      for(int i = 1 ; i <= 3 ; i = i + 1)  //PIN attempts (3 times)
      {
        cout<<"Enter ATM PIN: ";
        cin>>pin;

        if(pin == correctPin)
        {
            cout<<"Login Successful"<<endl;
            break;
        }
        else
        {
            cout<<"Incorrect PIN"<<endl;
        }
      }
      if(i > 3)
      {
       cout<<"Too many attempts. Card blocked" <<endl;
      }
      while(choice != 4)  //ATM Menu using while loop
      {
        cout<<endl<<"------ ATM MENU ------"<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Current Balance: "<<balance<<endl;
        }
        else if(choice == 2)
        {
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            balance = balance + amount;
            cout<<"Money Deposited Successfully"<<endl;
        }
        else if(choice == 3)
        {
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount <= balance && amount > 0)
            {
                balance = balance - amount;
                cout<<"Withdrawal Successful"<<endl;
            }
            else
            {
                cout<<"Insufficient balance"<<endl;
            }

        }
        else if(choice == 4)
        {
            cout<<"Thank you for using ATM"<<endl;
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
      }
}