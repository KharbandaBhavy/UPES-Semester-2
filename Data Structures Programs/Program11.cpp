//Code by Bhavy Kharbanda
// Experiment-11: Read the numbers from the user into an array and sort them using the insertion Sort algorithm.

#include <math.h> 
#include <stdio.h> 
 
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
void printArray(int arr[], int n) 
{ 
    int i; 
    printf("Sorted array is :");
    for (i = 0; i < n; i++) 
        printf(" %d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[5]; 
    printf("Enter elements of array:"); 
    for(int i = 0; i < 5; ++i) { 
     scanf("%d", &arr[i]); 
  } 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 

