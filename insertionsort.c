#include <stdio.h>

void insert(int arr[], int start)
{
    int pos = start;
    while (pos > 0 && arr[pos] < arr[pos - 1])
    {
        int temp = arr[pos];
        arr[pos] = arr[pos - 1];
        arr[pos - 1] = temp;
        pos--;
    }
}

void insertionsort(int arr[], int n, int start)
{
    if (start > n - 1)
    {
        return;
    }
    insert(arr, start);
    insertionsort(arr, n, start + 1);
    return;
}

void insertrec(int arr[], int n, int start)
{
    if (start >= n - 1)
    {
        return;
    }
    int i;
    int temp = arr[start];
    for (i = start - 1; i >= 0; i--)
    {
        if (arr[i] > temp)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            break;
        }
    }
    arr[i + 1] = temp;
    insertrec(arr, n, start + 1);
}
int main()
{
    int arr[5];
    int temp, i, j;
    printf("Enter the elements of the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
    }
    for (i = 1; i < 5; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    printf("The list after applying insertion sort is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The list after applying insertion sort recursively is: ");
    insertrec(arr2, 5, 0);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
