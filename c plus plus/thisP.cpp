#include<iostream>
using namespace std;

class A
{
  int a;
  public:
  void setData(int a)
  {
     this->a = a;
  }
  void getData()
  {
      cout<<"Value of a "<<a<<endl;
  }
};

int main()
{
      A a;
      a.setData(4);
      a.getData();


    return 0;
}