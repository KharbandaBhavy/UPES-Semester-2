//Question: 1.	Create a single linked list with 5 nodes and traverse the list using loops.
// Code by BHAVY KHARBANDA
// Sap Id:- 500082531
// Data Structures Lab: B11


#include<stdio.h>
#include<stdlib.h>

//creating the body for a node
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *new1, *temp;
    struct node *head=NULL;
    int i;
    
    for(i=1;i<=5;i++)
    {
      new1=(struct node*)malloc(sizeof(struct node));   // allocating memory to all the nodes using loop
      printf("\n Enter data of node %d:", i);
      scanf("%d", &new1->data);

        // It means if the list is empty then add new1
      if(head==NULL)     
        temp=head=new1;
    
      else
      {
          // this condition will work from the 2nd itteration when we have the first node in the list
         temp->next=new1;   
         temp=new1;
      }
    
    }
    //to keep the next column of last node empty
    temp->next=NULL;
    temp=head;
    // Loop to display the data of all the nodes
    while(temp!=NULL)
    {
    printf("\n%d", temp->data);
    temp=temp->next;
    }
  
  
}

