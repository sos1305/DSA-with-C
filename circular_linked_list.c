#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start;
    struct node *temp;
    struct node *newnode;
    struct node *ptr;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &start->data);
    start->next = start;
    int choice;
    int loc;
    printf("                                        \n");
    printf("          ------------------            \n");
    printf("          ------------------            \n");
    printf("                                        \n");
    printf("\n1. Insert data at beginning\n");
    printf("2. Insert data at the end\n");
    printf("3. Insert data at the location\n");
    printf("4. Deletion at beginning\n");
    printf("5. Deletion at end\n");
    printf("6. Deletion at location\n");
    printf("7. Traverse\n");
    printf("8. Exit\n");
    printf("                                        \n");
    printf("          ------------------            \n");
    printf("          ------------------            \n");
    printf("                                        \n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            temp = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = start;
            start = newnode;
            break;

        case 2:
            newnode = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            temp = start;
            newnode->next = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            break;

        case 3:
            ptr = (struct node *)malloc(sizeof(struct node));
            newnode = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            printf("Enter the location at which you want to insert the data: ");
            scanf("%d", &loc);
            temp = start;
            for (int i = 0; i < loc; i++)
            {
                ptr = temp;
                temp = temp->next;
            }
            newnode->next = ptr->next;
            ptr->next = newnode;
            break;

        case 4:
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            start = start->next;
            temp->next = start;
            break;

        case 5:

            ptr = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            while (temp->next != start)
            {
                ptr = temp;
                temp = temp->next;
            }
            ptr->next = start;
            break;

        case 6:
            ptr = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the location where you want to delete the element: ");
            scanf("%d", &loc);
            temp = start;
            for (int i = 0; i < loc; i++)
            {
                ptr = temp;
                temp = temp->next;
            }
            ptr->next = temp->next;
            break;

        case 7:
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            do
            {
                printf("Element = %d\n", temp->data);
                temp = temp->next;
            } while (temp != start);
            break;
        case 8:
            break;

        default:
            printf("Invalid input\n");
            break;
        }

    } while (choice != 8);
    return 0;
}
