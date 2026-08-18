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


Output : Address of a = 00000018275FFDCC
Address of p = 00000018275FFDC0
Address of p = 00000018275FFDC0
Address of q = 00000018275FFDB8
Value of a = 32758
Value of a = 32758
Value of p = 32758
