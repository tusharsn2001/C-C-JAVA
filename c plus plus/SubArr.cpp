#include<iostream>
using namespace std;
int main()
{
   int arr[5] = {12,2,-1,4,8};
  for(int i=0;i<5;i++)
  {
      for(int j=i;j<5;j++)
      {
         for(int k=i;k<=j;k++)
         {
             cout<<arr[k]<<" ";
         }cout<<endl;
      }
  }
   return 0;
}