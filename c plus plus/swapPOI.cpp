#include<iostream>
#include<conio.h>
using namespace std;

int swap(int *a,int *b)
{
int temp;
  temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x=8,y=9;
    swap(&x,&y); 
    cout<<x<<" "<<y;
    return 0;
}