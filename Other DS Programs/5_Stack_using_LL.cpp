// stack is last in first out LIFO
// top is a pointer that points to the last inserted element in the stack.

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(struct node *);
void pop();
void display();

int main()
{
    int choice, n;
    while(1)   //Loop for choice, infinite run
    {
        printf("\n Enter the choice");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                struct node *new1;
                new1 = (struct node *)malloc(sizeof(struct node));
                printf("\n Enter element to push: ");
                scanf("%d", &new1->data);
                new1->next=NULL;
                push(new1);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("\n Wrong choice");
        }
    }
}


void push(struct node *new1) 
{
    
    if (top == NULL) 
        top = new1;
    else 
    {
        new1->next = top;
        top = new1;
    }
}

void pop() 
{
    if (top == NULL) 
        printf("\n Stack underflow!");
    else {
        top = top->next;
        printf("\n Popped the element");
    }
}

void display() 
{
    struct node *temp;
    temp = top;

    if (top == NULL)
        printf("No elements to display!");
    else 
    {
        while (temp != NULL) 
        {
            printf("\n %d", temp->data);
            temp = temp->next;
        }
    }
}