/*******************************Abstract class ******************************/

#include<iostream>
using namespace std;
class Cal
{    public:
     int x,y,c;
    virtual void opr()=0;
    
};
 class Add:public Cal
 
 {
     public:

     void opr()
     {
        c=x+y;
         cout<<"Add :"<<c<<endl;
     }
 };
 class Sub:public Cal
 {
     public:
     void opr()
     {
         c=x-y;
         cout<<"Sub :"<<c<<endl;
     }
 };
 class Multi:public Cal
 
 {
     public:
     void opr()
     {
         c=x*y;
         cout<<"Multi :"<<c<<endl;
     }
 };
 class Div:public Cal
 
 {
     public:
    void  opr()
     {
         c=x/y;
         cout<<"Add :"<<c<<endl;
     }
 };
 int main()
 {
    Add  obj;
    obj.x=6;
    obj.y=6;
    obj.opr();
    return 0;
    
    
 }