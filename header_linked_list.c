#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *newnode, *start, *temp, *prev, *head;
    int loc, p, i, cho;

    head = (struct node *)malloc(sizeof(struct node));
    start = head;
    head->data = 0;
    head->next = NULL;

    do
    {
        printf("\n1.insert at beg\n2.insert at end \n3.insert at location \n 4.delete from beg \n5.delete from end\n6.delete from location \n7.traverse \n8.exit");
        printf("\nenter the choice :\n");
        scanf("%d", &cho);
        switch (cho)
        {
        case 1: // insert at beginning
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter the data :");
            scanf("%d", &newnode->data);
            if (head->next == NULL)
            {
                head->next = newnode;
                newnode->next = NULL;
            }
            else
            {
                newnode->next = head->next;
                head->next = newnode;
            }
            break;
        case 2: // insert at the end
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter the data :");
            scanf("%d", &newnode->data);

            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            break;
        case 3: // insert at location
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter the data :");
            scanf("%d", &newnode->data);
            printf("enter the location you wanna insert at:");
            scanf("%d", &loc);
            temp = head->next;
            for (int i = 1; i < loc - 1; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            break;
        case 4: // deleting from beg
            if (head->next == NULL)
            {
                printf("list is empty");
            }
            else
            {
                head->next = head->next->next;
            }
            break;
        case 5: // delelting from end
            if (head->next == NULL)
            {
                printf("list is empty");
            }
            else
            {
                temp = head->next;
                prev = head->next;
                while (temp->next != NULL)
                {
                    prev = temp;
                    temp = temp->next;
                }
                prev->next = NULL;
            }
            break;
        case 6:
            if (head->next == NULL)
            {
                printf("empty list");
            }
            else
            {
                printf("enter the location you wanna delete  ");
                scanf("%d", &loc);
                // prev = start;
                temp = head->next;
                for (i = 1; i < loc - 1; i++) // ek epehele
                {
                    /* code */
                    temp = temp->next;
                }

                temp->next = temp->next->next;
            }

            break;

        case 7:

            printf("head data=%d>>\n", head->data);
            printf("PRINTING THE DATA -----------\n");
            temp = head->next;
            while (temp != NULL)
            {
                printf("%d>>", temp->data);
                temp = temp->next;
            }
        }

    } while (cho != 8);
}