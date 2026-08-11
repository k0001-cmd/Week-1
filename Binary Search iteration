#include <stdio.h>

int binarySearch(int arr[],int x,int low,int high)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(x>arr[mid])
        low=mid+1;

        else if(x<arr[mid])
        high=mid-1;

        else if(x==arr[mid])
        return mid;
    }
return -1;
}


int main()
{
    int arr[]={10,22,33,66,77,89,100};
    int x;
    printf("Enter element you want to search ");
    scanf("%d",&x);

    int flag=binarySearch(arr,x,0,6);
    if(flag==-1)
    printf("Element not found");
    else
    printf("Element found at position %d",flag+1);
    return 0;
}
