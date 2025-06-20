#include<stdio.h>

// Linear search function
int linearsearch(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Element %d found in linear search\n", element);
            return i;
        }
    }
    printf("Element %d not found in linear search\n", element);
    return -1;
}

// Binary search function (requires sorted array)
int binarysearch(int arr[], int n, int element) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Function to calculate the number of initialized elements (up to sentinel -1)
int get_initialized_size(int arr[], int max_size) {
    for (int i = 0; i < max_size; i++) {
        if (arr[i] == -1) { // Sentinel value
            return i;
        }
    }
    return max_size; // If no sentinel is found, assume full array
}

int main() {
    // Unsorted array with sentinel value -1
    int arr[100] = {1, 4, 55, 67, 8, 90, 4, 2, -1}; // -1 marks end
    // Sorted array with sentinel value -1
    int arr1[100] = {1, 2, 3, 44, 55, 66, 77, 89, 90, -1}; // -1 marks end
    int max_size = sizeof(arr) / sizeof(int); // Total array size
    int max_size1 = sizeof(arr1) / sizeof(int);
    int size = get_initialized_size(arr, max_size); // Get actual initialized size
    int size1 = get_initialized_size(arr1, max_size1);
    int element = 1;
    int element1 = 44;

    // Linear search on arr
    int searchindex = linearsearch(arr, size, element);
    if (searchindex != -1) {
        printf("%d is found at index %d \n", element, searchindex);
    } else {
        printf("%d is not found in the array\n", element);
    }

    // Binary search on arr1
    int sindex = binarysearch(arr1, size1, element1);
    if (sindex != -1) {
        printf("%d is found at index %d \n", element1, sindex);
    } else {
        printf("%d is not found in the array\n", element1);
    }

    return 0;
}