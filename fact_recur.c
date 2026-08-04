
#include <stdio.h>


int fact(int x)
{
    if(x==1 || x==0)
    return 1;
    return(x*fact(x-1));
}


void display(int n)
{
    printf("the factorial = %d",fact(n));
}



int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    display(n);
    return 0;
}

