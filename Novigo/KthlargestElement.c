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
int main(){
    int arr[]={33,55,43,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    bubblesort(arr,size);
    printf("sorted array\n");
    printarray(arr,size);
    printf("enter the k value");
    int k;
    scanf("%d",&k);
    if (k<0 || k>size){
        printf("please enter the correct value");
    }else{

     printf("the kth largets value is %d\n",arr[k-1]);
    }

    return 0;
}