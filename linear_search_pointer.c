#include <stdio.h>

int linear_search(int * p, int key, int n)
{
    
    for(int i=0;i<n;i++)
    {
        if(p[i]==key)
        {
            printf("Found at index %d",i+1);
            return 0;
        }
    }
    return -1;
}


int main()
{
    int key;
    int arr[]={5,7,2,3,9,1,8};
    printf("Enter element you want to search\n");
    scanf("%d",&key);

    int flag=linear_search(&arr[0],key,7);
    if(flag==-1)
    printf("Element not found");
    return 0;
}

Output : Enter element you want to search
1
Found at index 6
