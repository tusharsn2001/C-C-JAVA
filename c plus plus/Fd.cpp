#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    void print()
    {
        cout<<"This is Not Your usual ";
    }
};
class B : public A{
      public:
      void print()
      {
          cout<<"Just Overrided";
      }
};
int main()
{
    B b;
    b.print();
    return 0;
}  