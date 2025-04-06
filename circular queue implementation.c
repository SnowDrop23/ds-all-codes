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
    
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1) % N) == front) printf("Queue is full!\n");
    else
    {
        rear = (rear+1) % N;
        queue[rear] = x;
    }
}

void deque()
{
    if(front == -1 && rear == -1) printf("Queue is empty!");
    else if(front == rear) 
    {
        printf("%d dequeued from the queue!\n", queue[front]); 
        front = rear = -1;
    }
    else
    {
        printf("%d dequeued from the queue!\n", queue[front]);
        front = (front+1) % N;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1) printf("Queue is empty!");
    else 
    {
        printf("Queue elements: ");
        while(i != rear)
        {
            printf("%d ", queue[i]);
            i = (i+1) % N;
        }
        printf("%d\n\n", queue[rear]);
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
        printf("Circular Queue Operations: \n");
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
