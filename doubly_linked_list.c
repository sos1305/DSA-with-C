#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
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
    start->prev = NULL;
    start->next = NULL;
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
    printf("7. Traverse in forward direction\n");
    printf("8. Traverse in backward direction\n");
    printf("9. Exit\n");
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
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            start->prev = newnode;
            newnode->next = start;
            newnode->prev = NULL;
            start = newnode;
            break;

        case 2:
            newnode = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next = NULL;
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
            newnode->prev = ptr;
            newnode->next = ptr->next;
            ptr->next = newnode;
            temp->prev = newnode;
            break;

        case 4:
            start = start->next;
            start->prev = NULL;
            break;

        case 5:

            ptr = (struct node *)malloc(sizeof(struct node));
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            while (temp->next != NULL)
            {
                ptr = temp;
                temp = temp->next;
            }
            ptr->next->prev = NULL;
            ptr->next = NULL;
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
            temp->next->prev = ptr;
            temp->next = NULL;
            temp->prev = NULL;
            break;

        case 7:
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            while (temp != NULL)
            {
                printf("Element = %d\n", temp->data);
                temp = temp->next;
            }
            break;

        case 8:
            temp = (struct node *)malloc(sizeof(struct node));
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            while (temp != NULL)
            {
                printf("Element = %d\n", temp->data);
                temp = temp->prev;
            }
            break;

        case 9:
            printf("Exiting the program....");
            break;

        default:
            printf("Invalid input\n");
            break;
        }

    } while (choice != 9);
    return 0;
}
