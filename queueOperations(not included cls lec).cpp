//queue
#include<stdio.h>
#define n 5

int queue[n];
int front = -1, rear = -1;
void enqueue()
{
    int x;
    printf("Please enter a data: ");
    scanf("%d", &x);
    if(rear == (n-1)) printf("Queue overflow.\n");
    else
    {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = x;
    }
    printf("\n");
}

void dequeue()
{
    if(front == -1) printf("Queue Underflow.\n");
    else
    {
        printf("%d removed from the queue.\n", queue[front]);
        if(front == rear) front = rear = -1;
        else front++;
    }
    printf("\n");
}

void display()
{
    if(front == -1) printf("Queue is empty.\n");
    else
    {
        printf("Current elements in the queue: ");
        for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
        printf("\n\n");
    }
}

void peek()
{
    if(front == -1) printf("Queue is empty.\n");
    else printf("Front element: %d\n", queue[front]);
    printf("\n");
}
int main(void)
{ 

    int choice;
    while(1)
    {
        printf("Queue Operations: \n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }

}
