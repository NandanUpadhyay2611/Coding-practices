
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int*d=&a;
    int**e=&d;
    cout<<"adress of pointer d is "<<**e<<endl;

     
     /*cout<<"address of a is "<<d;
      cout<<"address of a is "<<&a;
       cout<<"address of a is "<<*d;*/


    return 0;
}