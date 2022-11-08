void bubblesort(int *, int);
void insertionsort(int *, int n);
void selectionsort(int *, int n);

#include <stdio.h>

int main()
{
    int arr[5] = {21, 52, 31, 11, 9};
    selectionsort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubblesort(int arr[], int n)
{
    // The logic of bubble sorting is that we sort the array directly one by one and swap them by comparing. By the end of each iteration, the largest element gets sorted in the last position.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionsort(int arr[], int n)
{
    // The logic of insertion sorting is that we sort the array by comparing the element with the previous element/s. If the selected element is smaller than the previous one, we keep on overwriting the elements with the selected element till that element reaches its desired position. But, if the selected element is larger than the previous one, we come out of the loop because that would mean that the previous list (till i-1, suppose, if the index of the selected element is i), is already sorted.
    int i, j, temp;
    for (i = 1; i < n; i++)
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
}

void selectionsort(int arr[], int n)
{
    //The logic of selection sort is that we put the smallest element in its position one by one and then continue sorting. By the end of each iteration, the smallest element gets sorted in the last position.
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}