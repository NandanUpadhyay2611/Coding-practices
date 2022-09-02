#include<iostream>
using namespace std;
void introduce(string name, float age,char favchar){

 cout<<"my name is "<<name<<endl;
 cout<<"i am "<<age<<endl;
 cout<<"i love"<<favchar<<endl;

}

int main(){
    string yourname ;
    float age;
    char favchar;
    cout<<"lemme know you"<<endl;
    cin>>yourname;
    cout<<"my name is "<<yourname<<endl;
    cout<<"whats age"<<endl;
    cin>>age;
    cout<<"my age is "<<age<< endl;
    cout<<"whats your fav char "<<endl;
    cin>>favchar;
    cout<<"my fav char is "<<favchar<<endl;

    
        

    

 introduce("rohan",18.6, 'c');

 return 0;
}