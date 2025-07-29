// two sum problem
//in the given array return the array of index with the elements whose sum is equal to the target

#include<stdio.h>
#include<stdlib.h>
int* twosum(int *a,int size,int target){
    int *result=(int *)malloc(2* sizeof(int));
    result[0]=-1;
    result[1]=-1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]+a[j]==target){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return result;
}

int main(){

    int arr[]={1,2,3,4,5,6};
    int arr1[]={1,3,5};int tar=6; //output [0,2]
    int size=sizeof(arr)/sizeof(int);
    int target=8;//here 3+5=8 so the output expected is [2,4] [1,5]=2+6=8.
    int *res=twosum(arr1,size,tar);
    printf("[%d %d]",res[0],res[1]);
    free(res);

}