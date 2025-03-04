
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head;
    while(temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{ 
    struct node *head, *newNode, *temp;
    head = 0;
    int choice;
    printf("Do you want to create a linked list (1/0)? ");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;

        if(head == 0) head = temp = newNode;
        else
        {
            temp -> next = newNode;
            temp = newNode;
        }
        printf("Do you want to create a new node (0/1)? ");
        scanf("%d", &choice);
        
    }

    printf("Do you want to display the linked list: (0/1)? ");
    scanf("%d", &choice);
    if(choice) display(head);
    
    free(head);
    
}
