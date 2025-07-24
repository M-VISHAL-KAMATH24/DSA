#include<stdio.h>

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    printf("\n");
}

void selectionSort(int *a,int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        
    }
}
int main(){
    int a[]={12,5,88,14,5};
    selectionSort(a,5);
    printArray(a,5);

    return 0;
}