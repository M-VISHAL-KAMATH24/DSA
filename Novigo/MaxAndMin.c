#include<stdio.h>
#include<stdlib.h>
int max(int *a,int n){
     if(!a || n<1){
        return -1;
    }
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int *a,int n){
    if(!a || n<1){
        return -1;
    }
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
 
int main(){
    int arr[]={15,22,55,66,355,25,265};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res1=max(arr,n);
    int res2=min(arr,n);
    printf("%d\n",res1);
    printf("%d\n",res2);
    return 0;
}