// P-4-A Implement PUSH and POP algorithms of stack using array

#include <stdio.h>

#define N 5

int main()
{
    int stack[N];
    int top = 0;
    int choice, x, y;

    while(1)
    {
        printf("\n\n--- STACK OPERATIONS ---");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                /* PUSH operation */

                if(top >= N)
                {
                    printf("STACK OVERFLOW");
                }
                else
                {
                    printf("Enter element to insert: ");
                    scanf("%d", &x);

                    top = top + 1;
                    stack[top] = x;

                    printf("%d pushed into stack", x);
                }
                break;

            case 2:
                /* POP operation */

                if(top == 0)
                {
                    printf("STACK UNDERFLOW");
                }
                else
                {
                    y = stack[top];
                    top = top - 1;

                    printf("Deleted element = %d", y);
                }
                break;

            case 3:
                if(top == 0)
                {
                    printf("STACK IS EMPTY");
                }
                else
                {
                    printf("Stack elements are:\n");

                    for(int i = top; i >= 1; i--)
                    {
                        printf("%d\n", stack[i]);
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
