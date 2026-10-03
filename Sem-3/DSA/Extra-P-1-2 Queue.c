// Extra-P-1 Gain a asic understanding of Stacks and Queues as an abstract data type.
// Extra-P-1-2 Queue using Array

#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int value)
{
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("%d inserted into queue\n", value);
    }
}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

void main()
{
    int choice, value;

    do
    {
        printf("\n--- QUEUE ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);
}
