//Given an array and an integer k, find the maximum sum of any contiguous subarray of size k.

//sliding window
#include<stdio.h>
#include<stdlib.h>

int MaxSumOfSubArray(int arr[],int k,int n){
    int maxsum=0;
    //consider the first 4 elements
    for(int i=0;i<k;i++){
        maxsum=maxsum+arr[i];
    }
    int windowsum=maxsum; //here windowsum and maxsum is 1+2+3+4=10
    //now move the window consider the next element and remvoe the fromt element till n
    for(int i=k;i<n;i++){
        windowsum=windowsum+arr[i]-arr[i-k];
        maxsum=(maxsum>windowsum)?maxsum:windowsum;
    }
    return maxsum;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int k=4;//size of the subarray or also the window size
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the maxsum of the subarray is %d\n",MaxSumOfSubArray(arr,k,n));

    return 0;
}
