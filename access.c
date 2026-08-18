//WAP to access element of an array using pointer
// WAP to access 1 element of an array using pointer.
#include <stdio.h>

int main()
{
    int a[]={1,3,4};
    int * p;
    p=&a[1];

    printf("Address of 1st element of array = %p \n Value of 1st element = %d",p,*p);

    return 0;
}
