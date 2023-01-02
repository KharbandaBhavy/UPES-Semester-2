#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
   int data;
   struct node *next;
};
struct node *front;
struct node *rear;

void insert(int);
void del();
void display();

int main()
{
   int choice, value;
   system("cls");
   while(1) 
   {
    printf("\nM E N U\n");
    printf("1. Insert element into the Queue\n2. Delete element from the Queue\n3. Display Queue\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2: 
            del(); 
            break;
        case 3: 
            printf("\n Elements in the Queue are:");
            display(); 
            break;
        case 4: 
            exit(0);
        default: 
            printf("\nInvalid option selected! Please try again!!!\n");
      }
   }
}

void insert(int value)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if(front == NULL)
        front = rear = newNode;
    else {
        rear -> next = newNode;
        rear = newNode;
    }
    printf("\nInsertion is Success!!!\n");
}

void del()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}

void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct node *temp = front;
      while(temp->next != NULL)
      {
         printf(" %d ",temp->data);
         temp = temp -> next;
      }
      printf(" %d \n",temp->data);
   }
}