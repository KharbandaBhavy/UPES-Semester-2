
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() //fork command
{
    int pid;
    printf("\n Enter the process id : ");
    scanf("%d", &pid);
    pid=fork();
    if(fork()<0)
    {
    printf("\n Error");
    }
    else if(fork()==0)
    {
    printf("\n Child process");
    }
    else
    {
    printf(" Parent process");
    printf("\n");
    }
}