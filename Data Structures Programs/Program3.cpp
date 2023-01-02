// Code by Bhavy Kharbanda
// Experiment-3: Find the Transpose of a matrix.

#include <stdio.h> 
int main() 
{ 
    int a[10][10], tr[10][10], r, c; 
    printf("Enter rows and columns in the matrix : "); 
    scanf("%d %d", &r, &c); 
 
    printf("\nEnter matrix elements:\n"); 
    for (int i = 0; i < r; ++i) 
    for (int j = 0; j < c; ++j) 
    { 
        printf("Enter element a%d%d: ", i + 1, j + 1); 
        scanf("%d", &a[i][j]); 
    } 
 
    printf("\nEntered matrix is: \n"); 
    for (int i = 0; i < r; ++i) 
    for (int j = 0; j < c; ++j) 
    { 
        printf("%d  ", a[i][j]); 
    if (j == c - 1) 
        printf("\n"); 
    }
 
    for (int i = 0; i < r; ++i) 
    for (int j = 0; j < c; ++j) 
    { 
        tr[j][i] = a[i][j]; 
    } 
 
    printf("\nTranspose of the matrix is:\n"); 
    for (int i = 0; i < c; ++i) 
    for (int j = 0; j < r; ++j) 
    { 
        printf("%d  ", tr[i][j]); 
    if (j == r - 1) 
        printf("\n"); 
    }
  return 0; 
} 




