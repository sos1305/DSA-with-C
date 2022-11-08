#include <stdio.h>

struct pqueue
{
    int number;
    int priority;
} arr[5];

int rear = -1;

void insertdata()
{
    int num, pr;
    if (rear == 4)
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Enter the number and priority:");
        scanf("%d%d", &num, &pr);
        rear++;
        arr[rear].number = num;
        arr[rear].priority = pr;
    }
}

void deletedata()
{
    int num;
    if (rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        num = arr[rear].number;
        printf("%d is deleted\n", num);
        rear--;
    }
}

int checkhighestpriority()
{
    int pr = -69;
    if (rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        int i;
        for (i = 0; i <= rear; i++)
        {
            if (arr[i].priority > pr)
            {
                pr = arr[i].priority;
            }
        }
        printf("Highest Priority=%d\n\n", pr);
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = 0; i < rear; i++)
        {
            for (int j = i + 1; j <= rear; j++)
            {
                if (arr[i].priority > arr[j].priority)
                {
                    struct pqueue temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("Number=%d, Priority=%d\n", arr[i].number, arr[i].priority);
        }
    }
}
int main()
{
    int choice;
    do
    {
        printf("1. Insert data\n2.Delete data\n3.Check highest priority\n4.Display\n5.Exit\n");
        printf("Enter your choice: ");
        int num, pr;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertdata();
            break;

        case 2:
            deletedata();
            break;

        case 3:
            checkhighestpriority();
            break;

        case 4:
            display();
            break;

        default:
            break;
        }
    } while (choice != 5);
    return 0;
}
