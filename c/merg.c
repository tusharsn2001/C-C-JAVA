#include<conio.h>
#include<stdio.h>
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void merge(int arr[],int low,int high,int n)
{
    int mid = (low+high)/2;
    int b[n],i=low,j=mid+1,k=low;
    
    while(i<=mid && j<= high)
    {
        if(arr[i]<arr[j])
        {
            b[k] = arr[i];
            i++;k++;
        }
        else{
            b[k] = arr[j];
            k++;j++;
        }
    }
    if(i>mid)
    {
        while(j<=high)
        {
            b[k] = arr[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid)
        {
            b[k] = arr[i];
            k++;i++;
        }
    }
   for(k=low;k<=high;k++)
   {
        arr[k] = b[k];
   }
  // print(arr,n);
}
void mergeSort(int arr[],int low,int high,int n)
{
    if(low<high){
    int mid = (low + high)/2;
    mergeSort(arr,low,mid,n);
    mergeSort(arr,mid+1,high,n);
    merge(arr,low,high,n);
    }
}

int main()
{
    int n,i;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in array :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1,n);
    printf("\n");
    print(arr,n);
}