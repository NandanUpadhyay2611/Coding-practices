#include<iostream>
using namespace std;
int atm()

{
    
    int Enter(int pin);

    void showmenu();{
    int pincode ;
    cout<<"enter your pin: "<<endl;
    cin>>pincode;
    if(pincode=1234){

    cout<<">>>>>>>>MENU<<<<<<<<"<<endl;
    cout<<"1.Check balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"==============================="<<endl;
    }
    else {
     cout<<"oops! wrong pin";
    }

    }
    
};
int main(){
    int option;
    double balance=500;

   do{ showmenu()
    cout<<"Option: ";
    cin>>option;
    system("cls");
    switch(option){
        case 1: cout<<"Balance is: "<<balance<< "Rs"<<endl; break;
        case 2: cout<<"Deposit Amount: "<<endl; 
        double depositamount;
        cin>>depositamount;
        balance=balance+depositamount;
        break;
        case 3: cout<<"Withdraw Amount: "<<endl; 
        double withdrawamount;
        cin>>withdrawamount;
        if(withdrawamount>balance){
            cout<<"insufficient balance"<<endl;
           
        }
        balance=balance-withdrawamount;

        break;
        
    }
    }while(option!=4);
}
    
    
    
