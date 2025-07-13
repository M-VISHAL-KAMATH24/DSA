//Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 #include<stdio.h>
 #include<stdlib.h>
 int minimalLength(int nums[],int size,int target){
    if (size==0){
        return 0;
    }
    int minlen=size+1;
    int left=0;
    int windowsum=0;
    for(int right=0;right<size;right++){
        windowsum+=nums[right];
        while(windowsum>=target){
            minlen=((right-left+1)<minlen)?(right-left+1):minlen;
            windowsum-=nums[left];
            left++;
        }
        
    }
    return (minlen==size+1)?0:minlen;
 }


 int main(){
    int nums[]={1,2,3,4,5,6,7,8};
    int target=9;
    int size=sizeof(nums)/sizeof(nums[0]);
    printf("%d is the minlen of the subarray\n",minimalLength(nums,size,target));

    return 0;
 }