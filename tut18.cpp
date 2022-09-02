#include<iostream>
using namespace std;
/*void change(int n , int k){

   int m=n*k;
    cout<<"the product is: "<<m<<endl;

    
}
int main(){
    int n=5 , k=8 ;
    cout<<"product of X: "<<n<<endl;
    change(3,4);
    return 0; */

    //call by pointer reference//


   /*void swap(int *a,int* b){
   int temp =*a;
  *a=*b;
  *b=temp;
  

 }

 int main(){

    int a=5 , b=8;
    cout<<"the value of a is" <<a<< " and b is "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a is" <<a<< " and b is "<<b<<endl;
 }
*/

//call by cpp reference//

void swap(int &a ,int&b){
   int temp=a;
   a=b;
   b=temp;


}

int main(){
   int x=5;
   int y=8;
   cout<<"the value of a is" <<x<< " and b is "<<y<<endl;
   swap(x,y);
   cout<<"the value of a is" <<x<< " and b is "<<y<<endl;
 return 0;
}


