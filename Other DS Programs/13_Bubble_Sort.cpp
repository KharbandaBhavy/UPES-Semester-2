#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	
    {
	    for (j = 0; j < n-i-1; j++)
        {
		    if (arr[j] > arr[j+1])
            {
			    swap(&arr[j], &arr[j+1]);
            }
        }
    for (j=0; j < n; j++)
    {
		printf(" %d", arr[j]);
    }
    
    printf("\n");
    } 
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
    printf("\n Sorting array step Wise:\n");
	bubbleSort(arr, n);
	return 0;
}
