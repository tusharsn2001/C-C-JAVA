#include<iostream>
using namespace std;

class Base
{
    public:
   virtual void getData()
    {
        cout<<"Base Class\n";
    }
};
class Derived : public Base{
    public:
    void getData()
    {
        cout<<"Derived Class\n";
        
    }
};
int main()
{
    Base *B;
    Derived D;
    B = &D;
    B->getData();
    return 0;
}