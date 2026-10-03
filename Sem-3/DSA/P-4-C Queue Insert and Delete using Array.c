// P-4-C Implement insert and delete algorithms of a queue using array.
// P-4-C Implement a program to perform insert and delete algorithms / operations of a queue data structure.

#include <stdio.h>

#define N 5

int main()
{
    int queue[N + 1];
    int front = 0;
    int rear = 0;
    int choice, x, y;

    while(1)
    {
        printf("\n\n--- QUEUE OPERATIONS ---");
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                /* INSERT operation */

                if(rear >= N)
                {
                    printf("QUEUE OVERFLOW");
                }
                else
                {
                    printf("Enter element to insert: ");
                    scanf("%d", &x);

                    rear = rear + 1;
                    queue[rear] = x;

                    if(front == 0)
                    {
                        front = 1;
                    }

                    printf("%d inserted into queue", x);
                }
                break;

            case 2:
                /* DELETE operation */

                if(front == 0)
                {
                    printf("QUEUE UNDERFLOW");
                }
                else
                {
                    y = queue[front];

                    if(front == rear)
                    {
                        front = 0;
                        rear = 0;
                    }
                    else
                    {
                        front = front + 1;
                    }

                    printf("Deleted element = %d", y);
                }
                break;

            case 3:
                if(front == 0)
                {
                    printf("QUEUE IS EMPTY");
                }
                else
                {
                    printf("Queue elements are:\n");

                    for(int i = front; i <= rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
