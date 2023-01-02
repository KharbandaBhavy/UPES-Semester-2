// Code By Bhavy Kharbanda
// Experiment-2: Convert uppercase string to lowercase using for loop.

#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char str[200]; 
    printf ("Enter the string to be converted to lowercase : "); 
    gets (str); 
    for (int i = 0; str[i]; i++) 
    { 
        if (str[i] >= 65 && str[i] <= 90) 
            str[i] += 32; 
    } 
    printf ("Converted string is : %s\n", str); 
} 


