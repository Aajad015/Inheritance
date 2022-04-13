#include<iostream>
using namespace std;
class Base
{
private:
        int n,n1;
public:
           Base();
           
           int getvalue();
           int getvalue1();
};        
    class Depend:public Base
    {
public:
        int n2;
        void multy();
        void result();
    };
    Base::Base()
    {
        n=90;
        n1=50;
        
    };
    int Base::getvalue()
    {
        return n;
    };
    
    int Base::getvalue1()
    {
        return n1;
    };
    void Depend::multy()
    {
        n2=getvalue()*getvalue1();
        
    };
    void Depend::result()
    {
        cout<<"Num:"<<getvalue()<<endl;
         cout<<"Num1:"<<getvalue1()<<endl;
          cout<<"Result:"<<n2<<endl;
        
    };
    
    int main()
    {
        Depend obj;
        obj.multy();
        obj.result();
        return 0;
        
    }
