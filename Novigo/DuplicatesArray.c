#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void bubblesort(int *arr,int n){
    int temp;
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int duplicates(int *arr,int n){
    int found=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            printf("%d\n",arr[i]);
            found=1;
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
            }
        }
    }
}

int main(){
    int arr[]={44,55,44,33,4,5,44,5,44,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
    bubblesort(arr,n);
    printf("after sorting\n");
    duplicates(arr,n);
    return 0;
}