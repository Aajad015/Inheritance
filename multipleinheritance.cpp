#include<iostream>
using namespace std;
class E
{
    public:
    void fun()
    {
        cout<<"Hello i am from E block"<<endl;
    }

};
class M
{
    public:
    void fun1()
    {
        cout<<"Hello i am from M  block"<<endl;
    }

};
class N
{  
    public:
    void fun()
    {
        cout<<"Hello i am from N block"<<endl;
    }

};
class K
{ 
    public:
    void fun()
    {
        cout<<"Hello i am from K block"<<endl;
    }

};
class D:public E,public M,public N,public K
{
    public:
    void fun()
    {
        cout<<"Hello i am from K block"<<endl;
    }
};
int main()
{
    D obj;
    obj.fun();
    obj.fun1();
    return 0;
}