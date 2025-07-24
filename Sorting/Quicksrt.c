#include<stdio.h>
void printArray(int *arr,int n){
    for (int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i<j);
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}
void quicksort(int arr[],int low,int high){
    int partitionindex=partition(arr,low,high);

    if(low<high){
    quicksort( arr, low, partitionindex-1);
    quicksort( arr, partitionindex+1, high);
    }
}

int main(){
    int arr[]={55,44,12,95,1};
    quicksort(arr,0,5);
    printArray(arr,5);

    return 0;
}