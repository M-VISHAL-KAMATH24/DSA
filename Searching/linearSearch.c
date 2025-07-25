#include<stdio.h>
void printArray(int *a,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
//function for the linear searching
int linearSearch(int a[],int n,int element){
    for(int i=0;i<=n-1;i++){
        if(a[i]==element){
            return i;
        }
    }
    return -1;

}


int main(){
    int a[]={12,55,66,9,5,63,45};
    int n=sizeof(a)/sizeof(a[0]);
    int element=66;
    printArray(a,n);
    int res=linearSearch(a,n,element);
    
    printf("element is found at %d",res);
    return 0;
}