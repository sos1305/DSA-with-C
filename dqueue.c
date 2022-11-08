#include <stdio.h>

int main()
{
    int arr[8];
    int front = -1, rear = -1;
    int choice;
    do
    {
        printf("\n1. Push\n2. Pop from beginning\n3. Pop from end\n4. Display\n5. Exit\n\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if ((front == 0 && rear == 7) || rear + 1 == front)
            {
                printf("Queue is full. Overflow.\n");
            }
            else if (front == -1)
            {
                front++;
                rear++;
                printf("Enter data to push: ");
                scanf("%d", &arr[front]);
            }
            else if (rear == 7)
            {
                rear = 0;
                printf("Enter data to push: ");
                scanf("%d", &arr[rear]);
            }
            else
            {
                rear++;
                printf("Enter data to push: ");
                scanf("%d", &arr[rear]);
            }
            break;

        case 2:
            if (front == -1 && rear == -1)
            {
                printf("Queue is empty. Underflow.\n");
            }
            else if (front == rear)
            {
                printf("Popped element=%d\n", arr[front]);
                arr[front] = 0;
                front = -1;
                rear = -1;
            }
            else if (front == 7)
            {
                printf("Popped element=%d\n", arr[front]);
                arr[front] = 0;
                front = 0;
            }
            else
            {
                printf("Popped element=%d\n", arr[front]);
                arr[front] = 0;
                front++;
            }
            break;

        case 3:
            if (front == -1 && rear == -1)
            {
                printf("Queue is empty. Underflow.\n");
            }
            else if (front == rear)
            {
                printf("Popped element=%d\n", arr[front]);
                arr[front] = 0;
                front = -1;
                rear = -1;
            }
            else if (rear == 0)
            {
                printf("Popped element=%d\n", arr[rear]);
                arr[rear] = 0;
                rear = 7;
            }
            else
            {
                printf("Popped element=%d\n", arr[rear]);
                arr[rear] = 0;
                rear--;
            }
            break;

        case 4:
            if (front == -1 && rear == -1)
            {
                printf("Queue is empty. Underflow.\n");
            }
            else if (front <= rear)
            {
                printf("PRINTING THE ELEMENTS......\n\n");

                for (int i = front; i <= rear; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            else
            {
                printf("PRINTING THE ELEMENTS......\n\n");
                for (int i = front; i <= 7; i++)
                {
                    printf("%d ", arr[i]);
                }
                for (int i = 0; i <= rear; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n\n");
            break;

        case 5:
            break;

        default:
            printf("Invalid input\n\n");
        }

    } while (choice != 5);
    return 0;
}
