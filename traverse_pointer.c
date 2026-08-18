#include <stdio.h>

int main()
{
    int a[]={1,23,40,55,233,55,33,86,2};

    int * p;

    p=&a[0];
    
    for(int i=0;i<9;i++)
    {
        printf("%d\t",p[i]);
    }

    return 0;
}

Output : 1       23      40      55      233     55      33      86 2
