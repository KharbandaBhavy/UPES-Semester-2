#include<stdio.h>
#define MAX 100
int main()
{
int page[MAX],b,i,n,f,p,disp,pno,result;
int choice=0;
printf("\nEnter the base address:");
scanf("%d", &b);
printf("\nEnter the no. of  pages in memory: ");
scanf("%d",&n);
printf("\nEnter the page size: ");
scanf("%d",&p);
printf("\nEnter the size of memory unit: ");
scanf("%d",&f);
if(f<b)
printf("\n Memory unit is less than limit");
else
{
for(i=0;i<n;i++)
page[i]=-1;
printf("\nComplete the page table\n");
printf("(Enter frame no as -1 if that page is not present in any frame)\n\n");
printf("\nPage no.\tFrame no.\n-------   \t-------");
for(i=0;i<n;i++)
{
printf("\n\n%d\t\t",i);
scanf("%d",&page[i]);
}
do
{
printf("\n\nEnter the Page number and Displacement value:");
scanf("%d%d",&pno,&disp);
if(page[pno]==-1)
printf("\n\nThe required page is not available in any of frames");
else
{
result=(page[pno]*p)+disp;
printf("\n\nPhysical address is: %d",result);
}
printf("\nDo you want to continue, 1->yes, 0->no?:");
scanf("%d",&choice);
}while(choice==1);
return 1;
}}