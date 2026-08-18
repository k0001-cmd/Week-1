#include <stdio.h>

void insert(int n, int arr[],int pos)
{
     for(int i=n;i>pos;i--)
     arr[i]=arr[i-1];

     arr[pos]=30;
     n++;

     printf("Inserted array\n");
     for(int i=0;i<5;i++)
    printf("%d\t",arr[i]);
    
}

int main()
{
    int arr[5]={10,20,30,40,50};

    printf("Original array\n");
    for(int i=0;i<5;i++)
    printf("%d\t",arr[i]);
    insert(4,arr,2);
    return 0;
}
