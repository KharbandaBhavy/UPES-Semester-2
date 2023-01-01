#include<stdio.h>
#include <sys/types.h> 
#include <unistd.h>
int main() //sleep command
{
    int a=fork();
    printf("\n Enter the value of variable");
    scanf("%d",&a);
    if(a<0)
    {
    printf("\n Not create");
    }
    else if(a>0)
    {
      printf("\n Process create");
    }
    else
    {
    sleep(2);
    printf("\n Child create");
    }
return 0;
}