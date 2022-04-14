#include<iostream>
using namespace std;
class A
{
protected:
int a;
public:
int get_a()
{
    cout << "Enter the value of 'a' : " <<endl;  
       cin>>a;  
}
};
class B:public A
{
protected:
int b;
public:
int get_b()
{
    cout << "Enter the value of 'b' : " <<endl;  
       cin>>b;  
}
};
class C
{

   protected:
int c;
public:
int get_c()
{
    cout << "Enter the value of 'c' : " <<endl;  
       cin>>c;  
}  
};
class D:public C
{
    
   protected:
int d;
public:
int get_d()
{
    cout << "Enter the value of 'd' : " <<endl;  
       cin>>d;  
}  
};
class E:public D,public B
{
public:
int mul_e()
{
  get_a();
  get_b();
  get_c();
  get_d();

 cout << "Multiplication of a,b,c,d is : " <<a*b*c*d<<endl;    
}  
};
int main()
{
    E obj;
    obj.mul_e();
    return 0;
}