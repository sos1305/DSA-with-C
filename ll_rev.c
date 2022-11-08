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
    struct node *var;
    struct node *newstart;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &start->data);
    start->next = NULL;
    int choice;
    int loc;
    do
    {
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
        printf("8. Reverse\n");
        printf("9. Sort\n");
        printf("10. Exit\n");
        printf("                                        \n");
        printf("          ------------------            \n");
        printf("          ------------------            \n");
        printf("                                        \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            newnode->next = start;
            start = newnode;
            break;

        case 2:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            temp = start;
            newnode->next = NULL;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            break;

        case 3:
           
            newnode = (struct node *)malloc(sizeof(struct node));
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
            ptr->next = newnode;
            newnode->next = temp;
            break;

        case 4:
            start = start->next;
            break;

        case 5:

            temp = start;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            break;

        case 6:

            printf("Enter the location where you want to delete the element: ");
            scanf("%d", &loc);
            temp = start;
            for (int i = 0; i < loc; i++)
            {
                ptr = temp;
                temp = temp->next;
            }
            ptr->next = temp->next;
            temp->next = NULL;
            break;

        case 7:
            temp = start;
            while (temp != NULL)
            {
                printf("Element = %d\n", temp->data);
                temp = temp->next;
            }
            break;
        case 8:

            // temp = start;
            // while (temp->next != NULL)
            // {
            //     ptr = temp;
            //     temp = temp->next;
            // }
            // var = NULL;
            // newstart = temp;
            // while (var != start)
            // {
            //     var = start;
            //     while (var->next != ptr)
            //     {
            //         var = var->next;
            //     }
            //     temp->next = ptr;
            //     temp = ptr;
            //     ptr = var;
            // }
            // temp->next = ptr;
            // ptr->next = var;
            // var->next = NULL;
            // start = newstart;

            ptr = start;
            var = start->next;
            temp = start->next->next;
            if (ptr->next->next == NULL)
            {
                var->next = ptr;
                ptr->next = NULL;
                start = var;
            }
            else
            {
                while (temp->next != NULL)
                {
                    var->next = ptr;
                    ptr = var;
                    var = temp;
                    temp = temp->next;
                }
                var->next = ptr;
                temp->next = var;
                start->next = NULL;
                start = temp;
            }
            break;

        case 9:

            // temp=start;
            // for(temp=start;temp->next!=NULL;temp=temp->next){
            //     for(ptr=start;ptr->next!=NULL;ptr=ptr->next){
            //         int temporary;
            //         if(ptr->data > ptr->next->data){
            //             temporary=ptr->data;
            //             ptr->data=ptr->next->data;
            //             ptr->next->data=temporary;
            //         }
            //     }
            // }
            temp = start;
            int count = 0;
            for (temp; temp != NULL; temp = temp->next)
            {
                count++;
            }
            for (int i = 0; i < count - 1; i++)
            {
                temp = start;
                for (int j = 0; j < count - 1 - i; j++)
                {
                    if (temp->data > temp->next->data)
                    {
                        int temporary;
                        temporary = temp->data;
                        temp->data = temp->next->data;
                        temp->next->data = temporary;
                    }
                    temp = temp->next;
                }
            }
            break;

        case 10:
            break;
        default:
            printf("Invalid input\n");
            break;
        }

    } while (choice != 10);

    return 0;
}
