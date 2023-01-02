#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
  
        // Swap the found minimum element with the first element
        swap(&arr[min], &arr[i]);
    }
        for (j=0; j < n; j++)
		printf(" %d", arr[j]);
}

int main()
{
	int i,j,n, arr[10];
    printf("\n Enter the size of array:");
    scanf("%d", &n);
    printf("\n Enter the array to sort:");
    for(i=0;i<n;i++)
    scanf("\n %d", &arr[i]);
    printf("\n Before Sorting:");
    for(i=0;i<n;i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n After Sorting:");
	selectionSort(arr, n);
	return 0;
}
