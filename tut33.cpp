 #include<iostream>
 using namespace std;
 class shop{
    int id;
    float price;
    public:
     void setData (int a,float b){
        id=a;
        price=b;
     }
     void getData(void){
        cout<<"Code of this item is"<<id<<endl;
        cout<<"Priceof this item is"<<price<<endl;
     }

 };

 int main(){
    int size=4;
    shop *ptr =new shop[size];
    shop *ptrtemp =ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for(i=0;i<size;i++){
        cout<<"item number"<<i+1<<endl;
     ptr->getData();
     ptrtemp++;
     
    }
    return 0;
 }