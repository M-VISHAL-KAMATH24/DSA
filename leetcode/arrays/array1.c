// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

#include<stdio.h>
#include<stdlib.h>

void printarray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("array:%d\n",arr[i]);
    }
    printf("\n");
}
void merge_sorted_array(int *arr1,int m,int *arr2,int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0){
        if(i>=0 && arr1[i]>arr2[i]){
            arr1[k]=arr1[i];
            i--;
        }else{
            arr1[k]=arr2[j];
            j--;
        }
        k--;
    }

}
int main(){
    int arr1[]={1,2,3,5,0,0};
    int arr2[]={10,15,25};
    int m=3;
    int n=3;
    printarray(arr1,6);
    merge_sorted_array(arr1,m,arr2,n);
    printarray(arr1,6);

}