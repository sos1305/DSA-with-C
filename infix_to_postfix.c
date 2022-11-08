#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return (stack[top--]);
    }
}
int priority(char x)
{
    if (x == '(')
    {
        return 0;
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void main()
{
    char expression[20];
    char *e;
    printf("Enter the expression: ");
    scanf("%s", expression);
    e = expression;
    printf("\n");
    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
        }
        else if (*e == '(')
        {
            push(*e);
        }
        else if (*e == ')')
        {
            while (stack[top] != '(')
            {
                printf("%c ", pop());
            }
            pop();
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}