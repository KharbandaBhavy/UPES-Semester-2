#include<stdio.h>
#include<stdlib.h>
 
int mutex=1,full=0,empty=3,v=0;
 
int main()
{
    int n;
    int wait(int);
    int signal(int);
    printf("\n    Menu");
    printf("\n1.Producer\n2.Consumer\n3.Exit");
    while(1)
    {
        printf("\nSelect Whether you are a producer or consumer:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:    if((mutex==1)&&(empty!=0))
                         {
                            mutex=wait(mutex);
                            full=signal(full);
                            empty=wait(empty);
                            v++;
                            printf("\nProducer produces the item: %d",v);
                            mutex=signal(mutex);
                         }
                    else
                        printf("Buffer is full!!");
                    break;
            case 2:    if((mutex==1)&&(full!=0))
                        {
                            mutex=wait(mutex);
                            full=wait(full);
                            empty=signal(empty);
                            printf("\nConsumer consumes item: %d",v);
                            v--;
                            mutex=signal(mutex);
                        }
                    else
                        printf("Buffer is empty!!");
                    break;
            case 3:
                    exit(0);
                    break;
        }
    }
   
    return 0;
}
 
int wait(int s)
{
    return (--s);
}
 
int signal(int s)
{
    return(++s);
}