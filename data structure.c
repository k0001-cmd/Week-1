#include <stdio.h>
int main()
{
    printf("Enter string");
    char str[30];
    scanf("%c",&str);
    int len=sizeof(str);
    char str1[len];
    for(int i=0;i<len;i++)
    {
        str1[i]=str[i];
    }
   
    int f;
    f=strcmp(str,"Array");
    if(f==0)
    printf("It is a non primitive linear static ds");
    if(str1=="Linked List"|| str1=="LL")
    printf("It is a non primitive linear dynamic ds");
    if(str1=="Tree" || str1=="TREE")
    printf("It is a non primitive non linear ds");
    if(str1=="Graph" || str1=="GRAPH")
    printf("It is a non primitive non linear ds");
    
    return 0;
}
    
    
