#include <stdio.h>

int main()
{
    int B, W, I, J, LC, LR, M, N;
    int UC,UR;

    printf("Enter Base address\n");
    scanf("%d",&B);
    printf("Enter Storage size\n");
    scanf("%d",&W);
    printf("Enter row subset of the element to be found\n");
    scanf("%d",&I);
    printf("Enter column subset of the element to be found\n");
    scanf("%d",&J);

    printf("Lower limit of row\n");
    scanf("%d",&LR);

    printf("Lower limit of column\n");
    scanf("%d",&LC);

    printf("Enter upper bound of column\n");
    scanf("%d",&UC);
    printf("Enter upper bound of row\n");
    scanf("%d",&UR);

    int ch;
    printf("Enter your choice\n");
    printf("1. Press 1 for Row Major \n 2. Press 2 for Column Major\n 3. Exit");
    scanf("%d",&ch);



        switch(ch)
        {
        case 1 :
        N=UC-LC+1;
        int address = B+W*((I-LR)*N+(J-LC));
        printf("The address of the element in 2D array = %d",address);

        break;

        case 2:
        M=UR-LR+1;
        address= B + W*((J-LC)*M+(I-LR));
        printf("The address of the element in 2D array = %d",address);
        break;

        default :
        printf("Enter proper choice\n");
        }



    

    return 0;
}

Output : Enter Base address
100
Enter Storage size
1
Enter row subset of the element to be found
8
Enter column subset of the element to be found
6
Lower limit of row
1
Lower limit of column
1
Enter upper bound of column
15
Enter upper bound of row
10
Enter your choice
1. Press 1 for Row Major 
 2. Press 2 for Column Major
 3. Exit1
The address of the element in 2D array = 210

Enter Base address
100
Enter Storage size
1
Enter row subset of the element to be found
8
Enter column subset of the element to be found
6
Lower limit of row
1
Lower limit of column
1
Enter upper bound of column
15
Enter upper bound of row
10
Enter your choice
1. Press 1 for Row Major 
 2. Press 2 for Column Major
 3. Exit2
The address of the element in 2D array = 157
