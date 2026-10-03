// Extra-P-2 This module explains Infix to Postfix conversion of expressions, and the evaluation of Postfix expressions.
// Extra-P-2-1 Infix to Postfix

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value)
{
    top++;
    stack[top] = value;
}

char pop()
{
    char value;

    value = stack[top];
    top--;

    return value;
}

int precedence(char operator)
{
    if(operator == '^')
        return 3;

    if(operator == '*' || operator == '/')
        return 2;

    if(operator == '+' || operator == '-')
        return 1;

    return 0;
}

void main()
{
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for(i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        if(isalnum(ch))
        {
            postfix[j] = ch;
            j++;
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while(top != -1 && stack[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }

            pop();
        }
        else
        {
            while(top != -1 &&
                  stack[top] != '(' &&
                  precedence(stack[top]) >= precedence(ch))
            {
                postfix[j] = pop();
                j++;
            }

            push(ch);
        }
    }

    while(top != -1)
    {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s", postfix);
}
