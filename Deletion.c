#include <stdio.h>

void deletion(int arr[], int n, int pos)
{
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    printf("\nAfter deletion\n");
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    }

int main()
{
    int arr[]={10,20,30,40,50};
    printf("Before deletion\n");
    for(int i=0;i<5;i++)
    printf("%d\t",arr[i]);
    deletion(arr,5,2);
    return 0;
}
