#include<iostream>
using namespace std;

bubble_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
}

int main()
{
    int arr[10],n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    bubble_sort(arr,n);
    return 0;
}