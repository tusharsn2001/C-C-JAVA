#include<iostream>
using namespace std;
int main()
{
    int size;
    int *p;

    cout<<"Enter size of array"<<endl;
    cin>>size;

    p = new int[size];
    cout<<"Enter valus"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>p[i];
    }
    cout<<"Elements are"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<endl;
    }

    return 0;
}