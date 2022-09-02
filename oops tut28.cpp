#include<iostream>
using namespace std;
class employee{
    int salary;
    int id;

    public:

    void setdata(){
        salary=56000;
        cout<<"Enter your employee id"<<endl;
        cin>>id;

    }
    void getdata(){
        cout<<"employee id is "<<id;
        cout << "  and the salary is "<<salary<<endl;

    }

};

int main(){
    employee fb[5];
    for(int i=0;i<5;i++){
        fb[i].setdata();
        fb[i]. getdata();

    }
    
    return 0;
}