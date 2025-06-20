 #include<stdio.h>

//  traversal 
 void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
 }

//  deletion function
 int deletion(int arr[],int size ,int index){
    if (index > size){
        return -1;
    }
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    printf("deletion sucess\n");
    return 1 ;
 }

 int main(){
    int arr[100]={12,1,52,20,10};
    int size=5;
    int index=2;
    display(arr,size);
    deletion(arr,size,index);
    size=size-1;
    display(arr,size);

    return 0;

 }