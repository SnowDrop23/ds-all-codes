#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    printf("Please enter a data: ");
    scanf("%d", &x);
    if(rear == N-1) printf("Queue Overflow");
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void deque()
{
    if(front == -1 && rear == -1) printf("Queue is empty!");
    else if(front == rear) front = rear = -1;
    else
    {
        printf("%d dequeued from the queue!\n", queue[front]);
        front++;
    }
}

void display()
{
    if(front == -1 && rear == -1) printf("Queue is empty!");
    else 
    {
        printf("Queue elements: ");
        for(int i = front; i < rear+1; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n\n");
    }
}

void peek()
{
    if(front == -1 && rear == -1) printf("Queue is empty!");
    else
    {
        printf("Front element is: %d\n", queue[front]);
    }
}
int main ()
{
    int choice;
    while(1)
    {
        printf("Queue Operations: \n");
        printf("1. Enqueue()\n2. Dequeue()\n3. Peek()\n4. Display()\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: deque(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }

}
