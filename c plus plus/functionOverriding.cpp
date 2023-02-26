#include<iostream>
using namespace std;

class Base
{
    public:
    void getData()
    {
        cout<<"Base Class\n";
    }
};
class Derived : public Base{
    public:
    void getData()
    {
        cout<<"Derived Class\n";
        Base::getData();
    }
};
int main()
{
    Derived D;
    D.getData();
    return 0;
}