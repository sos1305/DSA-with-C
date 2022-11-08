#include <stdio.h>

int linearsearch(int arr[], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            break;
        }
    }
    if (arr[i] != num)
        i = -1;
    return i;
}
int main()
{
    int arr[] = {1, 2, 7, 3, 4, 5, 8, 6, 9, 10};
    int location = linearsearch(arr, 10, 3);
    if (location == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at position %d.", location);
    }

    return 0;
}
