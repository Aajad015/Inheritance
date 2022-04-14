#include<iostream>
using namespace std;
class Student
{
protected:
int roll_no;
public:
void set_roll(int x)
{
  roll_no=x;  
}
      void get_roll()
      {
          cout<<"Roll_number :"<<roll_no<<endl;
      }
};

/******************************Test***************************************/
class test:virtual public Student
{
    protected:
    int hindi,english;
    public:
    void set1(int x,int y)
    {
        hindi=x;
        english=y;
    }
    void get1()
    {
        cout<<"Hindi :"<<hindi<<endl;
         cout<<"English :"<<english<<endl;
    }
};
/**************************Sports**************************/
class Sports:virtual public Student
{
    protected:
    int makrs;
    public:
    void set2(int z)
    {
        makrs=z;
    }
    void get2()
    {
        cout<<"Makrs of Sports: "<<makrs<<endl;
    }
};
class Result:public test,public Sports
{   protected:
    int sum;
    public:
    void total()
    {
         sum = hindi+english+makrs;
        get_roll();
        get1();
        get2();
        cout<<"Total :"<<sum<<endl;
    }
    
};
int main()
{
    Result obj;
    obj.set_roll(101);
    obj.set1(45,55);
    obj.set2(80);
    obj.total();
    return 0;
}