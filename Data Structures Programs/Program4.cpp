// Code by Bhavy Kharbanda
// Experiment-4: Find out the largest and smallest number in a given array. 

#include<stdio.h> 
 
int main() 
{ 
    int a[50], n, i, large, small; 
 
    printf("\nEnter the size of the array: "); 
    scanf("%d", &n); 
 
    printf("\nEnter the elements of the array: "); 
    for(i = 0; i < n; i++) 
    scanf("%d", &a[i]); 
    large = a[0];  
    for(i = 1; i < n; i++) 
    { 
        if(large < a[i])    
        { 
            large = a[i];  
        } 
    } 
    printf("\nThe largest element is: %d", large); 
    small = a[0];     
    for(i = 1; i < n; i++) 
    { 
        if(small>a[i])    
        { 
            small = a[i];    
        } 
    } 
    printf("\nThe Smallest element is: %d", small); 
    return 0; 
} 



