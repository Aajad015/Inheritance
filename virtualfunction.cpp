#include<iostream>
using namespace std;
class Base
{
    public:
    int a;
   virtual void show()
    {
        cout<<"1:Hello ! This is Base class function ";
    }
};
class Drived:public Base
{  public:
    int b;
    void show()
    {
    cout<<"Hello ! This is Base class function :"<<endl;
    cout<<"Hi.. This is Drived class function: ";
    }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Drived obj_Drived;
    base_pointer = &obj_Drived;
    base_pointer->b=89;
    base_pointer->show();
    return 0;
}
