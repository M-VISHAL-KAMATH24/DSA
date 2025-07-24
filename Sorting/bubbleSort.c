#include<stdio.h>

// function to print the array
void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    printf("\n");
}
void bubbleSort(int *a,int n){
    int temp;
    int isSorted=0;
    for(int i=0;i <n-1;i++){  //for the number of passes
        isSorted=1;//made adaptive
        printf("working in parse %d \n",i+1);
        for(int j=0;j<(n-1-i);j++){  //for the comparison 
           if(a[j]>a[j+1]){
            // swap
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            isSorted=0;
           } 

        }
        if (isSorted){
            return;
        }
    }
}
int main(){
    int a[]={12,54,65,7,33,9};
    int b[]={1,2,3,4,5};
    int n=6;
    printf("array before sorting\n");
    printArray(b,n);
    printf("array after sorting\n");
    bubbleSort(b,n);
    printArray(b,n);
    return 0;
}