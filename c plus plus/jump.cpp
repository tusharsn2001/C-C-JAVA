#include<bits/stdc++.h>
using namespace std;
    void minJumps(int arr[], int n){
        // Your code here
        int jumps = 0;
        int i = 0;
        
        // if(arr[0]==0)return -1;
        // if(n==1)return 0;
        while(i<=n)
        {
           int step = arr[i];   
            i  = arr[step];
            jumps += 1;
        }
        cout<< jumps;
    }


    int main()
    {
        int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;
        int n = 11;

        minJumps(arr,n);
    }