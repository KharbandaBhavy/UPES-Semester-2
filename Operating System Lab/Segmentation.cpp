#include<stdio.h>
#define MAX 100
int main()
{
int segment[MAX],b,i,n,f,p,disp,pno,result;
int choice=0;
printf("\nEnter the base address:");
scanf("%d", &b);
printf("\nEnter the no. of  Segments in memory: ");
scanf("%d",&n);
printf("\nEnter the segment size: ");
scanf("%d",&p);
printf("\nEnter the size of memory unit: ");
scanf("%d",&f);
if(f<b)
printf("\n Invalid Memory Limit*********");
else
{
for(i=0;i<n;i++)
segment[i]=-1;
printf("\nComplete the Segment table\n");
printf("(Enter frame no as -1 if that Segment is not present in any frame)\n\n");
printf("\nSegment no.\tFrame no.\n-------\t-------");
for(i=0;i<n;i++)
{
printf("\n\n%d\t\t",i);
scanf("%d",&segment[i]);
}
do
{
printf("\n\nEnter the Segment number and Displacement value:");
scanf("%d%d",&pno,&disp);
if(segment[pno]==-1)
printf("\n\nThe required Segment is not available in any of frames");
else
{
result=(segment[pno]*p)+disp;
printf("\n\nPhysical address is: %d",result);
}
printf("\nDo you want to continue, 1->yes, 0->no?:");
scanf("%d",&choice);
}while(choice==1);
return 1;
}}

