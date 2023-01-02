// Code By Bhavy Kharbanda
// Experiment-1: Find sum of all array elements using recursion.

#include <stdio.h> 
int Sum(int Arr[],int n,int i) 
{ 
    if(i<n) 
        return Arr[i]+Sum(Arr,n,++i); 
        return 0; 
} 
int main() 
{ 
    int Arr[50],i,n,result=0; 
    printf("Enter size of the array : "); 
    scanf("%d", &n); 
    printf("Enter elements in array : "); 
    for(i=0; i<n; i++) 
    { 
        scanf("%d", &Arr[i]); 
    } 
    result=Sum(Arr,n,0); 
    printf("Sum of array is :%d",result); 
}      

