
#include <stdio.h>
int main()
{
    int a[4];
    int aa[4][4];

    printf("Enter elements in 1D array\n");
    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);

    printf("Enter elements in 2D array\n");
    for(int i=0;i<4;i++)
    {
        printf("Row %d\n",i+1);
        for(int j=0;j<4;j++)
          {
              scanf("%d",&aa[i][j]);
          }
    }

    printf("Accessing 3rd element from 1D array = %d",a[2]);
    printf("Accessing 2nd row 3rd element from 2D array = %d",aa[1][2]);

    //Traversing

     printf("1D Array\n");
    for(int i=0;i<4;i++)
    {
       printf("%d\t",a[i]);
    }

     printf("\n 2D Array\n");
    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
          {
             printf("%d\t",aa[i][j]);
          }
          printf("\n");
    }

    return 0;
}
