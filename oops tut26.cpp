#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;

    public:
    void setdata(void)
    {
        cout<<"Enter the if"<<endl;
        cin>>id;
        count++;


    }

 void getdata(void){
    cout<<"The id of this employee is "<< id<<"and this is employee number "<<count<<endl;

 }
 static void getcount(void){
    cout<<"the value of count is "<<count<<endl;
}



};
 

int main(){
    employee harry,rohan ,lovish;
    harry.setdata();
    harry.setdata();
    harry.setdata();
    harry.getdata();
    employee::getcount();

}