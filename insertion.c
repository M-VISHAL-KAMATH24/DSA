 #include<stdio.h>

//  traversal 
 void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
 }

//  insertion function
 int insertion(int arr[],int size,int element,int capacity ,int index){
    if (size >= capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    printf("insertion sucess\n");
    return 1 ;
 }

 int main(){
    int arr[100]={12,1,52,20,10};
    int size=5;
    int element=66,capacity=100,index=2;
    display(arr,size);
    insertion(arr,size,element,capacity,index);
    size=size+1;
    display(arr,size);

    return 0;

 }