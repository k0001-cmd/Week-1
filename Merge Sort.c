#include <stdio.h>

void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    int i,j,k;

    for(i=0;i<n1;i++)
        L[i]=arr[p+i];

    for(j=0;j<n2;j++)
        M[j]=arr[q+1+j];

    i=0;
    j=0;
    k=p;

    while(i<n1 && j<n2){
        if(L[i]<=M[j])
            arr[k++]=L[i++];
        else
            arr[k++]=M[j++];
    }

    while(i<n1)
        arr[k++]=L[i++];

    while(j<n2)
        arr[k++]=M[j++];
}

void mergeSort(int arr[],int p,int r){
    if(p<r){
        int q=p+(r-p)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int main(){
    int data[]={6,4,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);

    mergeSort(data,0,size-1);

    printf("Sorted array: ");
    for(int i=0;i<size;i++)
        printf("%d\t",data[i]);

    return 0;
}
