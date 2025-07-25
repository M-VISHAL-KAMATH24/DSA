// here the objective of the problem is there will be the sorted array but the sorted array may be shifted by value for example
//initial array 1,2,3,4,5,6,7 after the shift of value 3 it will be 5,6,7,1,2,3,4 and now we have to find the value of index of target element

#include<stdio.h>
int indexReturn(int *a,int n,int target){
    int low=0;
    int high=n-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target)
            return mid;
        if(a[mid]<a[low]){//for left subarray
            if(a[low]<=target && target<a[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{//for right subarray
            if(a[mid]<target && target <=a[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int a[]={5,6,7,1,2,3,4};
    int n=sizeof(a)/sizeof(int);
    int target=2; //output shld be 4
    int res=indexReturn(a,n,target);
    printf("%d is result\n",res);
    return 0;
}