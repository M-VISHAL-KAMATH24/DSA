#include<stdio.h>

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    printf("\n");
}

void insertionsort(int a[],int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int a[]={7,2,91,77,3};
    int n=5;
    printf("before sorting\n");
    printArray(a,n);
    printf("after sorting\n");
    insertionsort(a,n);
    printArray(a,n);
    return 0;
}