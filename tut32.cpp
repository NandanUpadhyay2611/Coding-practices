#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a,int b){
        real=a;
        imaginary=b;

    }

};

int main(){
    //complex c1;
    //complex *ptr=&c1;
    complex *ptr = new complex;
    (*ptr).setdata(1,96);
    (*ptr).getdata();

    //arrow operator

    ptr->setdata(1,69); //same as uppar wala
    //can only use with pointers not on objects
    
       //Array of objects
       
       complex *ptr1 = new complex[4];
    ptr1->setdata(2,6);
    ptr1->getdata();
    (ptr1+1)->setdata(8,7);
    (ptr1+1)->getdata();
    
}