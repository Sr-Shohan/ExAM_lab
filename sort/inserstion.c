#include<stdio.h>
insertion_sort(int arr[],int n)
{
    int i,j,item,k;

    for(i=1;i<n;i++)
    {
        item = arr[i];
        j=i-1;
        while(j>=0&&arr[j]>item)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=item;
    }
    for(k=0; k<n; k++)
        printf("%d  ",arr[k]);


}

int main()
{
    int arr[10],n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    insertion_sort(arr,n);
    return 0;
}