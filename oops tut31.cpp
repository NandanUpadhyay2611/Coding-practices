#include <iostream>
using namespace std;
int main()
{
    /* int a=4;
     int *ptr=&a;
     cout<<"value at adress ptr is "<<*ptr<<endl; */

    int *p = new int(40);
    cout << "value at adress is " << *(p) << endl;

    int *arr = new int[4];       
    arr[1] = 20;
    *(arr + 1 - 1) = 30;

    arr[3] = 69; 
    delete[] arr;
    delete[] arr;

    cout << "value of arr[0] is" << arr[0] << endl;
    cout << "value of arr[1] is" << arr[1] << endl;
    cout << "value of arr[3] is" << arr[3] << endl;
}
