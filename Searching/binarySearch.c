#include<stdio.h>
void printArray(int *a,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
//function for the binary search
int binarySearch(int *a,int n,int element){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;

    while(low<=high){
        if (a[mid]==element){
            return mid;
        }
        if(a[mid]<element){
            low=mid+1;
        }
        if(a[mid]>element){
            high=mid-1;
        }
    }
    return -1;
}
int main(){

    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    printArray(a,n);
    int res=binarySearch(a,n,5);
    printf("%d\n",res);
}