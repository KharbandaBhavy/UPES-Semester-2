#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
int i=10;
intpid=getpid();
pid=fork();
if(pid<0)
printf("\n Error");  
else if(pid==0)
    {
	printf("\n The initial value of i is %d", i);
	i=i+10;
printf("\n The value of i is: %d", i);
printf("\n Child process started");
printf("\n Child process terminating....");
exit(0);     }
else  {
wait(0);
printf("\n Parent process wait for child process to terminate");
printf("\n Parent process starting.....\n");
    }
return 0;
    }
