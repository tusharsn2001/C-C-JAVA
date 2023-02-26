#include<iostream>
using namespace std;

void min(int arr[],int k,int n,int loc)
{   
    int min = arr[k];
    loc = k;
    for(int j=k+1;j<n;j++)
    {
        if(min>arr[j])
        {
            min = arr[j];
            loc = j;
        }
    }
    

}
void SS(int arr[],int n){
  
  
  for(int k=1;k<7;k++)
  {
   int loc = k;
    min(arr,k,n,loc);
    int temp = arr[k];
    arr[k] = arr[loc];
    arr[loc] = temp;

  }  
}




int main()
{
    int arr[7] = {12,3,45,14,23,5,76};
    SS(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}