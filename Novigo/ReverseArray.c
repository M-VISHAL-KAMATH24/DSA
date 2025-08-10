#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int *arr,int size){
    if (size<=1) return ;
    int i=0;
    int j=size-1;
    int temp;
    while(i<j){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    reverse(arr,n);
    printarray(arr,n);
}