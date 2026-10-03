// Extra-P-2 This module explains Infix to Postfix conversion of expressions, and the evaluation of Postfix expressions.
// Extra-P-2-2 Postfix Expression Evaluation

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    top++;
    stack[top] = value;
}

int pop()
{
    int value;

    value = stack[top];
    top--;

    return value;
}

void main()
{
    char postfix[MAX];
    int i, a, b, result;
    char ch;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for(i = 0; postfix[i] != '\0'; i++)
    {
        ch = postfix[i];

        if(isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            b = pop();
            a = pop();

            switch(ch)
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;
            }

            push(result);
        }
    }

    result = pop();

    printf("Result = %d", result);
}
