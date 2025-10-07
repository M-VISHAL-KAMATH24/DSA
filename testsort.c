#include<stdio.h>

// function to print the array
void printArray(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//function for bubble sorting
void bubbleSort(int a[],int n){
    //by defauly bubble sort is non adaptive doesnt make use of the sorted array but we can make it adaptive
    int temp;
    int Sorted=0;
    for(int i=0;i<=n-1;i++){ //passes
        Sorted=1;
//comparison
printf("%d is the number of passes\n",i+1);
for(int j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        Sorted=0;
    }
}
if (Sorted){
    return;
}
    }
}
//function for the insertion sorting
void insertionSort(int a[],int n){
    //12,24,5,63,16
    int key,j;
    for (int i=1;i<=n-1;i++){
        key=i;
        j=i-1;
        while(j>=0 && a[key]<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=a[key];

    }
    
}

//function for the quick sorting
int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(i<=high && a[i]<=pivot){
            i++;
        }
        while(j>=low && a[j]>pivot){
            j--;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        return j;
    }


void quickSort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(arr,low,high);
        //quicksorting for left and right subarray
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
//function for the selection sort
void selectionSort(int a[],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }
}

int main(){
    int arr[]={12,24,5,63,16};//array is of length 5
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printf("ORIGINAL ARRAY\n");
    printf("****************\n");
    printArray(arr,n);
    printf("after the bubble sorting\n");
    bubbleSort(arr,n);
    printArray(arr,n);
    printf("after the insertion sorting\n");
    insertionSort(arr,n);
    printArray(arr,n);
    printf("after the quick sorting\n");
    quickSort(arr,0,n-1);
    printArray(arr,n);
    printf("after the selection sorting\n");
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}