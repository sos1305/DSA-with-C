#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    int sem;
    struct student *next;
};
int main()
{
    struct student *temp, *start, *newNode;

    start = (struct student *)malloc(sizeof(struct student));
    printf("enter student name, roll no and semester\n");
    scanf("%s %d %d", start->name, &start->roll, &start->sem);
    start->next = NULL;

    int cho;
    int cust;
    int counter = 0;
    do
    {
        printf("                                        \n");
        printf("          ------------------            \n");
        printf("          ------------------            \n");
        printf("                                        \n");
        printf("1. Add data to the begining\n");
        printf("2. Add data to the end\n");
        printf("3. Delete the first node\n");
        printf("4. Delete the last node\n");
        printf("5. Display list\n");
        printf("6. Add data to the custom index\n");
        printf("7. Delete custom index\n");
        printf("8. Exit\n");
        printf("                                        \n");
        printf("          ------------------            \n");
        printf("          ------------------            \n");
        printf("                                        \n");
        printf("Enter your choice\n");
        scanf("%d", &cho);
        switch (cho)
        {
        case 1:
            newNode = (struct student *)malloc(sizeof(struct student));
            printf("enter the name roll number and semester of the new student\n");
            scanf("%s %d %d", newNode->name, &newNode->roll, &newNode->sem);
            newNode->next = start;
            start = newNode;
            break;
        case 2:
            newNode = (struct student *)malloc(sizeof(struct student));
            printf("enter the name roll number and semester of the student\n");
            scanf("%s %d %d", newNode->name, &newNode->roll, &newNode->sem);
            newNode->next = NULL;
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            break;
        case 3:
            start = start->next;
            break;
        case 4:
            temp = start;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            break;
        case 5:
            temp = start;
            while (temp->next != NULL)
            {
                printf("NAME : %s , Roll no : %d , Semester : %d\n", temp->name, temp->roll, temp->sem);
                temp = temp->next;
                printf("  -->  ");
            }
            printf("NAME : %s , Roll no : %d , Semester : %d\n", temp->name, temp->roll, temp->sem);
            printf("  -->  ");
            printf(" NULL \n");

            break;
        case 6:
            newNode = (struct student *)malloc(sizeof(struct student));
            printf("enter the name roll number and semester of the student\n");
            scanf("%s %d %d", newNode->name, &newNode->roll, &newNode->sem);

            printf("enter the index\n");
            scanf("%d", &cust);
            temp = start;

            while (counter == cust)
            {
                temp = temp->next;
                counter++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        case 7:
            printf("Enter the index you want to delete");

            while (counter == cust - 1)
            {
                temp = temp->next;
                counter++;
            }
            temp->next = temp->next->next;
            break;
        case 8:
            break;

        default:
            printf("invalid choice \n");
            break;
        }
    } while (cho != 8);

    return 0;
}