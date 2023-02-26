#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp = a;
    a = b;
     b = temp;
}


int partition(int arr[],int i,int j)
{
    int x = arr[i];
    int l = i;
    for(int r=i+1;r<=j;r++)
    {
        if(arr[r]<=x)
        {
            l += 1;
            swap(arr[r],arr[l]);
        }
    }
    swap(arr[i],arr[l]);
    return i;
}


int QS(int arr[],int i,int j)
{
      if(i==j)
      return arr[i];
      else{
        int m = partition(arr,i,j);
        QS(arr,i,m-1);
        QS(arr,m+1,j);
        
      }
      
}



int main()
{
    int arr[6] = {34,12,2,45,90,5};
    QS(arr,0,1);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}