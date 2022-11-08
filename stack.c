#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[8], choice, tos;
    printf("Stack implementation using Array\n");
    tos = -1;
    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4.Exit");
        printf("\n Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (tos == 7)
            {
                printf("Stack is full. Overflow.\n");
            }
            else
            {
                tos++;
                printf("Enter the element: ");
                scanf("%d", &arr[tos]);
            }
            break;
        case 2:
            if (tos == -1)
            {
                printf("Stack is empty. Underflow.\n");
            }
            else
            {
                printf("Popped element=%d\n",arr[tos]);
                arr[tos] = 0;
                tos--;
            }
            break;
        case 3:
            if (tos == -1)
            {
                printf("Stack is empty. Underflow.\n");
            }
            else
            {
                printf("Elements: ");
                for (int i = 0; i <= tos; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;
        case 4:
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    } while (choice != 4);
    return 0;
}