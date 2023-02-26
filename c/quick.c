#include<conio.h>
#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void print(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = (low-1);
    int j;
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high){
    int p = partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
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
    int low = 0;
    int high = n-1;
    quickSort(arr,low,high);
    print(arr,n-1);
}