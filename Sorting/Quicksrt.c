#include<stdio.h>
void printArray(int *arr,int n){
    for (int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
#include <stdio.h>

// Partition function
int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while(i <= high && a[i] <= pivot) {
            i++;
        }
        while(j >= low && a[j] > pivot) {
            j--;
        }
        if(i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while(i < j);

    // Swap pivot with a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

// QuickSort function
void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int partitionIndex = partition(arr, low, high);
        quicksort(arr, low, partitionIndex - 1);
        quicksort(arr, partitionIndex + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={55,44,12,95,1};
    quicksort(arr,0,5);
    printArray(arr,5);

    return 0;
}