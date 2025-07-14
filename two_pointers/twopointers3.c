// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


#include<stdio.h>
#include<stdlib.h>

int max_amount(int *arr,int size){
    int left=0;
    int right=size-1;
    int maxarea=0;
    while(left<right){
        int h=(arr[left]<arr[right])?arr[left]:arr[right];
        int width=right-left;
        int area=h*width;
        if(area>maxarea){
            maxarea=area;
        }
         if(arr[left]<arr[right]){
            left++;
         }else{
            right--;
         }
    }
    return maxarea;
}

int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    printf("the max area is %d\n",max_amount(arr,size));
    return 0;
}