#include <stdio.h>

int partition(int arr[],int p,int r){
    int pivot=arr[r];
    int i=p-1;
    int j,temp;

    for(j=p;j<r;j++){
        if(arr[j]<=pivot){
            i++;

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;

    return i+1;
}

void quickSort(int arr[],int p,int r){
    if(p<r){
        int q=partition(arr,p,r);

        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
    }
}

int main(){
    int data[]={6,4,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);

    quickSort(data,0,size-1);

    printf("Sorted array: ");        
    for(int i=0;i<size;i++)
        printf("%d\t",data[i]);

    return 0;
}
