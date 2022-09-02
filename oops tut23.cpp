#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
   string s;

public:
   void read(void);
   void ones_compliment(void);
   void display(void);
   void chk_bin(void);
};

void binary ::read(void)
{
   cout << "enter a binary number" << endl;
   cin >> s;
}
void binary ::chk_bin(void)
{

   for (int i = 0; i < s.length(); i++)
   { // check
      if (s.at(i) != '0' && s.at(i) != '1')
      {
         cout << "incorrect binary format" << endl;
         exit(0);
      }
   }
}
void binary::ones_compliment(void) {
   
   cout<<"displaying your binary no."<<endl;
   for(int i=0;i<s.length();i++){
   if(s.at(i)=='1'){
     s.at(i)='0';
   }
   else{
      s.at(i)='1';
   }
   cout<<s.at(i);
   cout;

}}

int main()
{
   binary b;
   b.read();
   b.chk_bin();
   b.ones_compliment();
}
