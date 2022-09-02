#include <iostream>
using namespace std;
//vol of cylinder:
int volume(double a,int r,int h ){
    cout<<"cylinder"<<endl;
    return (a*r*r*h);
}
//vol of cube:
int volume(int a){
    cout<<"cube"<<endl;
    return a*a*a;
}
//vol ofcuboid:
int volume(int a,int b,int h){
    cout<<"cuboid"<<endl;
    return a*b*h;
}

int main(){

    cout<<"volume of cube :"<<volume(3)<<endl;
    cout<<"volume of cyliner :"<<volume(3.14,2,1)<<endl;
    cout<<"volume of cuboid :"<<volume(2,3,1)<<endl;
    return 0;
    
    
}