#include<stdio.h>
selection_sort(int arr[],int n)
{
    int i, j,index_min,temp,k;
    for(i=0; i<n-1; i++)
    {
        index_min = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index_min])
                index_min = j;
        }
        if(index_min!=i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
    for(k=0;k<n;k++)
        printf("%d  ",arr[k]);


}

int main()
{
    int arr[10],n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    selection_sort(arr,n);
    return 0;
}