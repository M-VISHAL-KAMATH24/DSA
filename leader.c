#include<stdio.h>

//find the leader in the array

//the left element shuld be greater than all its right element however the last element in the array will be the leader

void findleader(int arr[],int n){
    int current_leader=arr[n-1];
    printf("leaders: %d ",current_leader);
    for(int i=n-1;i>=0;i--){
        if(arr[i]>current_leader){
            current_leader=arr[i];
            printf("%d ",current_leader);
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5];
    int size=5;
    printf("enter the elements in array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }

    findleader(arr,size);

    return 0;
}


//runs with o(n)complexity and the array is traversed only once from back