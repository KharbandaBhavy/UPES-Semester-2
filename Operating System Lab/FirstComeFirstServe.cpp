#include<stdio.h>
int main()
{
    int n, bt[20], wt[20], tat[20],i,j;
    float avwt=0, avtat=0;
    //bt->Burst time
    //wt->Waiting time
    //tat->Turn around time
    //avwt-> Average waiting time
    //avtat-> average turn around time
    printf("\n Enter total number of processes:");
    scanf("%d", &n);
    printf("\n Enter process burst time:\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:", i+1);
        scanf("%d", &bt[i]);
    }

    wt[0]=0;   // Initial waiting time is ZERO
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    printf("\n Process\t Burst Time\t Waiting time\t TurnAround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\n P[%d]\t\t%d\t\t%d\t\t%d", i+1,bt[i],wt[i],tat[i]);               
    }
    avwt/=i;
    avtat/=i;
    printf("\n\n Average Waiting time: %f", avwt);
    printf("\n Average TurnAround time: %f", avtat);


    return 0;
}