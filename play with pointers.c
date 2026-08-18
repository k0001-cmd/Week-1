#include <stdio.h>

int main()
{
    int a;
    int * p;
    p=&a;

    int **q;
    q=&p;

    printf("Address of a = %p\n",p);
    printf("Address of p = %p\n",&p);
    printf("Address of p = %p\n",q);
    printf("Address of q = %p\n",&q);

    printf("Value of a = %d\n",a);
    printf("Value of a = %d\n",*p);
    printf("Value of p = %d\n",**q);


return 0;

}
