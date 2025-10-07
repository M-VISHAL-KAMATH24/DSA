// todays concepts covered: bubble sort, selection sort,insertion sort and quick sort in C language

#include<stdio.h>
// function to print the array
void printArray(int *arr,int n){
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// lets start with the bubble sorting algorithm
void bubbleSort(int *a,int n){
    int temp;
    // object is to take the largest element to last and samllest element to first
    for (int i=0;i<=n-1;i++){//represents the number of passess
        for(int j=0;j<n-1-i;j++){//represents the number of comparisions
//in each pass the number of comparision is 1 less than it so j<=n-1-i
            if(a[j]>a[j+1]){
                //swap
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;//swaping the elements 
            }
        }

    }
}
//function for the quick sort. My Favourite
int Partition(int *a,int low,int high){
    int pivot=a[low];//first element in the array is the pivot
    int i=low+1;//second element is i initially
    int j=high; //last element is j initially
    int temp;
    do{
    while( i<high && a[i]<=pivot ){
            i++;
    }
    while(j>low && a[j]>pivot){
        j--;
    }
    if(i<j){
        //swap i and j elements;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i<j);//do this till i<j but as soon as j and i cross each other
//swap jth element with the pivot and that becomes the partition index so return that
temp=a[low];//since pivot is a[low]
a[low]=a[j];
a[j]=temp;
return j;

}
void quickSort(int a[],int low,int high){
    int partitionIndex;
    //the motive here is dividing the array to subarray and then performing the quicksort on that subarrays and this will continue till the array is sorted
    if(low<high){//implementing condition .will perform till the array is sorted
        partitionIndex=Partition(a,low,high);
        quickSort(a,low,partitionIndex-1);
        quickSort(a,partitionIndex+1,high);   
    }
}
//fucntion to implement the insertion sort
void insertionSort(int *a,int n){
    int key,j;
    for(int i=1;i<=n-1;i++){//comparin starts from 2nd elementa[1]
        key=i;//elementindex thats compared
        j=i-1;//previous element
        if(j>=0 && a[j]>a[key]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=a[key];

    }
    
}
//function for the selection sorting
void selectionSort(int a[],int n){
    //the idea here is consider the first element as the minimum and compare it if element more minimum than it is present then swap it will the first element
    int min,temp;
    for(int i=0;i<=n-1;i++){
        min=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        //swap now
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
}
int main(){
    //example array of size 6 
    int a[]={45,12,3,14,78,5};
    // int size=6;
    int n=sizeof(a)/sizeof(a[0]);//this will give us the size of the array instead of counting  it manually.
    printf("ORIGINAL ARRAY\n");
    printArray(a,n);
    printf("*************\n");
    printf("after the bubble sort\n");
    bubbleSort(a,n);
    printArray(a,n);
    printf("after the quick sort\n");
    quickSort(a,0,n-1);//here low is 0 and high is the nth element
    printArray(a,n);
    printf("after the insertion sort\n");
    insertionSort(a,n);
    printArray(a,n);
    printf("after the selection sort\n");
    selectionSort(a,n);
    printArray(a,n);
    printf("*************\n");
    printf("Thankyou and stay tune\n");
    return 0;

}

