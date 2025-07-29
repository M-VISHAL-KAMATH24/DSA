//checking if the array contains duplicates
#include<stdio.h>
#include<stdbool.h>

//time complexity of o(n2)
bool containsDuplicate(int *a,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                return true;
            }
        }
    }
    return false;

}
//reduce time complexity by sorting the array first
void bubblesort(int a[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

bool containsDuplicate2(int a[],int n){
    bubblesort(a,n);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={1,2,3,3,4};
    int size=sizeof(arr)/sizeof(int);
     if (containsDuplicate2(arr,size)){
        printf("contains duplicate\n");
     }else{
        printf("contains no duplicates\n");
     }
    return 0;
}
