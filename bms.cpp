#include<iostream>
#include<iomanip>
#include<fstream>
#include<cctype>
using namespace std;
 
class Bank_Account{
    int account_number;
    char name[40];
    char type;
    int Money_deposit;

public:
       void create_account();
       void display_account();

};
 void Bank_Account::create_account(){
    system("cls");
    cout<<"\t Enter the Account Number: ";
    cin>>account_number;
    cout<<"\t Enter the name of the account holder: ";
    cin.ignore();
    cin.getline(name,40) ;
    cout<<"\t Enter the type of the account (C/S): ";
    cin>>type;
    type=toupper(type);
    cout<<"\t Enter the initial amount (>=500 for Saving ans >=1000 for current):";
    cin>>Money_deposit;
    cout<<endl;
    cout<<"\t Account Created Successfully... :";
    cout<<endl;

 }


 void Bank_Account::display_account(){
   cout<<"\t Bank Account Number: "<<account_number<<endl;
   cout<<"\t Account Holder Name: "<<name<<endl;
   cout<<"\t Type Of Account: "<<type<<endl;
   cout<<"\t Balance Amount: "<<Money_deposit<<endl;



 }

 int main(){


    char ch;
    int num;


    cout<<"--------------------------------------"<<endl;
    cout<<"|WELCOME TO THE BANK MANAGEMENT SYTEM|"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t----Main Menu----"<<endl;
    cout<<"\t 1. Create Account "<<endl;
    cout<<"\t 2. Deposit Money "<<endl;
    cout<<"\t 3. Withdraw Money "<<endl;
    cout<<"\t 4. Balance Enquiry "<<endl;
    cout<<"\t 5. All Account Holder List "<<endl;
    cout<<"\t 6. Close an Account "<<endl;
    cout<<"\t 7. Modify an Account "<<endl;
    cout<<"\t 8. Exit"<<endl;
    cout<<endl;

    cout<<"\t Enter your choice(1-8): ";
    cin>>ch;

    switch(ch){
        case '1':
              break;
        case '2':
            system("cls");
            cout<<"\t Enter the account number: ";
            cin>>num;
            // deposit function
            break;
        case '3':
            system("cls");
            cout<<"\t Enter the account number: ";
            cin>>num;
            // withdraw function
            break;
        case '4':
            system("cls");
            cout<<"\t Enter the account number: ";
            cin>>num;
            // balance enquiry
            break;
        case '5':
            //display_all();// display function
            break;
        case '6':
             system("cls");
            cout<<"\t Enter the account number: ";
            cin>>num;
            // close account function
            break;
        case '7':
             system("cls");
            cout<<"\t Enter the account number: ";
            cin>>num;
            // modify account function
            break; 
        case '8':
             cout<<"\t Thanks for using the bank management System...";
            break;
         
    }

    Bank_Account B;
    B.create_account();
    cout<<endl;
    B.display_account();
    return 0;
 }

