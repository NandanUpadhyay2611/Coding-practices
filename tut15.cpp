#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;

}em;

int main(){
    em nandan;
    struct employee harry;
    harry.eId=1;
    nandan.eId=2;
    nandan.favchar='n';
    harry.favchar='h';
    nandan.salary=1200000000.839;
    harry.salary=320000;
    cout<<"nandan's eId= "<<nandan.eId<<endl;
    cout<<"harry's salary= "<<harry.salary<<endl;
    cout<<"nandan's eId= "<<nandan.eId<<endl;
    cout<<"nandan's eId= "<<nandan.eId<<endl;

}

