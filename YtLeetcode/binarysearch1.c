// lets start with our 2-3 leetcode problems
 //Find First and Last Position of Element in Sorted Array
 //the objective is if theres an array [1,2,2,2,3] then if the target is 2 thenthe output will be [1,3] as 2 starts at index 1 and ends at 3
 #include<stdio.h>
 #include<stdlib.h>
 //first we have to find the starting index
 int firstIndex(int *a,int n,int target){
    int low=0;
    int high=n-1;
    int mid;
    int res=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target){
            res=mid;
            low=mid+1;
        }
        if(a[mid]<target){
            low=mid+1;
        }
        if(a[mid]>target){
            high=mid-1;
        }
        
    }
    return res;//will be - if not found
 }
 int lastIndex(int *a,int n,int target){
    int low=0;
    int high=n-1;
    int mid;
    int res=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==target){
            res=mid;
            high=mid-1;
        }
        if(a[mid]<target){
            low=mid+1;
        }
        if(a[mid]>target){
            high=mid-1;
        }
    }
    return res;

 }
 int *rangefind(int *a,int n, int target){
    int *res=(int *)malloc(2*sizeof(int));
    res[1]=firstIndex(a,n,target);
    res[0]=lastIndex(a,n,target);
    return res;
 }


 int main(){
    int a[]={1,2,2,2,3};//lets go with above example
        int *res=(int *)malloc(2*sizeof(int));
    int n=sizeof(a)/sizeof(int);
    int target=2;
   res= rangefind(a,n,target);
   printf("[%d %d]\n",res[0],res[1]);
    return 0;
 }