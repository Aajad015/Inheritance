#include<iostream>
using namespace std;
class Car
{
private:
void BMW()
{
   cout<<"This is BMW Car :"<<endl;

 Car::BMW();
}
//Car::BMW();
};
class Car1:public Car
{
public:
void Audi()
{
   cout<<"This is Audi Car :"<<endl;
   //Car::BMW()
}
};
class Car2:public Car1
{
public:
void Mercedese()
{
   cout<<"This is Mercedese Car :"<<endl;
}
};
  main()
 {
     Car2 obj;
     //obj.BMW();
     obj.Audi();
     obj.Mercedese();
     //return 0;

 }
