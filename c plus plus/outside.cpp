#include<iostream>
using namespace std;
 
class item
{
   private:
   int number;
   float cost;
   public:
   void getData(int a,float b);
   void putData(void)
   {
    cout<<cost<<" "<<number;
   }
};
void item :: getData(int a,float b)
{
     number = a;
     cost = b;
}
int main()
{
    item A;
    A.getData(10,20.09);
    A.putData();
    return 0;
}