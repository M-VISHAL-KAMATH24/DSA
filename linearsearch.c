 #include<stdio.h>

 int linearsearch(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            printf("element found\n");
            return i;
        }
    }
    printf("not found");
    
 }

 int binarysearch(int arr[],int n,int element){
     int low,mid,high;
     low=0;
     high=n-1;
     
     //run this until the low and  high converges
     while(low<=high){
         mid=(low+high) /2;
     if(arr[mid]==element){
        return mid;
     }
     if(arr[mid]<element){
        low=mid+1;
     }else{
        high=mid-1;
     }
    }
    return -1;
 }

 int main(){
    int arr[100]={1,4,55,67,8,90,4,2};
    int arr1[100]={1,2,3,44,55,66,77,89,90};
    int size= sizeof(arr)/sizeof(int);
    int size1=9;
    int element=1;
    int element1=44;
    // int searchindex=linearsearch(arr,size,element);
    // printf("%d is found at index %d \n",element,searchindex);
    int sindex=binarysearch(arr1,size1,element1);
    if (sindex != -1) {
        printf("%d is found at index %d \n", element1, sindex);
    } else {
        printf("%d is not found in the array\n", element1);
    }
    return 0;
 }