// concepts covered:linear and binary search. 4-5 binary search leetcode questions.Silent coding

#include<stdio.h>
//function for the printing of array
void printArray(int *a,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
// lets start with lineary search 
// logic is just the array traversal till the required element is found
// as it does the traversal of array of n length the time complexity is o(n);
int linearSearch(int *a,int n,int element){
    for(int i=0;i<=n-1;i++){
        if(a[i]==element){
            return i; //lets return the index
        }
    }
    return -1;
}

//binary search is another search algorithm better than the linear search that search in complexity of o(logn) but works for only the sorted arrays.
//logic is to divide the array and check whether the mid is lower or high than the target and make update in mid low and high accordingly until low<=high
//function for the binary search
int  binarySearch(int *a,int n,int element){
    int low=0;//pointing to the 1st element index
    int high=n-1;//pointing to the last index
    int mid;//mid index
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==element){
            return mid;//output
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
    int a[]={41,55,21,4,6,8,4};
    //lets take a sorted array
    int b[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(int);
    printArray(a,n);
    int res=linearSearch(a,n,41);
    printf("element found at %d\n",res);
    int res2=binarySearch(b,n,5);
    printf("element is found at %d\n",res2);

    return 0;
}