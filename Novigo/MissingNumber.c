#include<stdio.h>
#include<stdlib.h>
int missingValue(int *arr,int size){
int n=size+1;
int sum=0;
for (int i=0;i<size;i++){
    sum=sum+arr[i];
}
long long expsum=((n*1LL*(n+1))/2);
return (int)(expsum-sum);
}
int main(){
    int arr[]={9,5,7,4,2,3,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=missingValue(arr,size);
    printf("%d\n",res);
    return 0;
}