#include<iostream>
using namespace std;
class shop
{
 int itemid[100];
 int itemprice[100];
 int counter=0;

 public:
  //void initcounter(void){counter=0;}
  void setprice(void);
  void displayprice(void);
};

void shop ::setprice(void){
    for(int i=0;i<counter;i++){
        cout<<"Enter ID of your item "<<counter+1<<endl;
        cin>>itemid[counter];
        cout<<"Enter price of your item "<<endl;
        cin>>itemprice[counter];
        counter++;

          }
}
void shop::displayprice(void){
    for(int i=0;i<counter;i++){

        cout<<"Price of your item with id  "<<itemid[i]<<"is "<<itemprice[i];

    }
}
int main(){

shop dukaan;
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.displayprice();
return 0;
}