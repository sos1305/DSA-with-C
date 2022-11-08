#include <stdio.h>

int hashdivision(int id)
{
    int index = id %101;
    return index;
}
int main()
{
    int arr[100];
    for (int i = 0; i < 5; i++)
    {
        int id;
        printf("Enter the employee id\n ");
        scanf("%d", &id);
        int index = hashdivision(id);
        arr[index] = id;
        printf("Employee %d is stored at %d location\n", i + 1, index);
    }
    return 0;
}
