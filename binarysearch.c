#include <stdio.h>

int binarysearch(int arr[], int size, int num)
{
    int mid, beg = 0, loc = -1;
    size = size - 1;
    while (beg <= size)
    {
        mid = (beg + size) / 2;
        if (arr[mid] == num)
        {
            loc = mid;
            break;
        }
        if (num < arr[mid])
        {
            size = mid - 1;
        }
        else if (num > arr[mid])
        {
            beg = mid + 1;
        }
    }
    return loc;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = binarysearch(arr, 10, 10);
    if (x != -1)
    {
        printf("Element found at position %d", x);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
