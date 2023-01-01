/*
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h> 
#include <unistd.h>
 

 
int main()
{
    int s=0;
    int wait(s);
    int signal(s);

}
int wait(int s)
{
    s=s-1;
    printf("\n Process Entered the critical section");
    if(s<0)
    {
        printf("\n Process can't enter Critical section ");
        printf("\n Process is now in Blocked list");
        sleep(1);
    }
    else
    return;
}
 
int signal(int s)
{
    s=s+1;
    printf("\n Process Entered the critical section");
    if(s<=0)
    {
        printf("\n Process can't enter Critical section ");
        printf("\n Process is now in Blocked list");
        wakeup(1);
    }
    else
    return;
}
*/



#include <stdio.h>
#include <unistd.h> // For sleep()
#include <pthread.h>
#include <semaphore.h>
sem_t mutex;
void *thread(void *arg);
/* Start of main function */
int main() {
sem_init(&mutex, 0, 1);
pthread_t t1, t2;
pthread_create(&t1, NULL, thread, NULL);
sleep(2);
pthread_create(&t2, NULL, thread, NULL);
pthread_join(t1, NULL);
pthread_join(t2, NULL);
sem_destroy(&mutex);
return 0;
} /* End of main program */
void *thread(void *arg) {
sem_wait(&mutex); // Waiting
printf("\nEntered critical section\n");
// critical section
sleep(2);
printf("\nExiting critical section\n");
sem_post(&mutex); // Signalling
}
