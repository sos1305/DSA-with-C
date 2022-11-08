#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    int i, j;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j && arr[i][j] == 0)
            {
                count++;
            }
            if (i == j && arr[i][j] == 0)
            {
                count--;
            }
        }
    }

    if (count == n * n - n)
    {
        printf("The given matrix is a diagonal matrix");
    }
    else
    {
        printf("The given matrix is not a diagonal matrix");
    }
    return 0;
}
