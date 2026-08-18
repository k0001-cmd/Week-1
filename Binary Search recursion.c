#include <stdio.h>

int binarySearch(int array[],int x, int low, int high){

    int mid;
    if(high>=low)
    mid=low+(high-low)/2;
    if(x==array[mid])
    return mid;
    if(x>array[mid])
    return binarySearch(array,x,mid+1,high);
    if(x<array[mid])
    return binarySearch(array,x,low,mid-1);

    return -1;
}

int main()
{
    int array[]={10,20,30,35,45,55,60,70};
    int n=sizeof(array)/sizeof(array[0]);
    int x=45;
    int result=binarySearch(array,x,0,n-1);
    if(result==-1){
        printf("Not found");
    }
    else {
        printf("Found at %d",result+1);
    }
    return 0;
}
