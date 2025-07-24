// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

 
#include<stdio.h>
#include<stdlib.h>

int *targetsum(int *arr,int size,int target){
    int left=0;
    int right=size-1;
    int *res=(int *)malloc(2 *sizeof(int));
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            res[0]=left+1;
            res[1]=right+1;
            return res;
        }else if(sum>target){
            right--;
        }else{
            left++;
        }

    }
    return NULL;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    int *res=targetsum(arr,size,target);
    printf("[%d %d]\n",res[0],res[1]);    

    return 0;
}