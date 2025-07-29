#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int partition(int *a,int low,int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(i<=high && a[i]<=pivot){
            i++;
        }
        while(j>=low && a[j]>pivot){
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

void quicksort(int *a,int low,int high){
    int pindex;
    if(low<=high){
        pindex=partition(a,low,high);
        quicksort(a,low,pindex-1);
        quicksort(a,pindex+1,high);
    }
}
bool isDuplicates(int a[],int size){
    quicksort(a,0,size-1);
    for(int i=0;i<size-1;i++){
        if(a[i]==a[i+1]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,33,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    if (isDuplicates(arr,n)){
        printf("contains duplicate\n");
    }else{
        printf("no duplicates\n");
    }

    return 0;
}