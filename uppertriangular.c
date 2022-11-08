#include <stdio.h>

int main()
{
    int i, j;
    int count = 0;
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
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
            if (i > j && arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == n * (n+1)/2 - n)
    {
        printf("The given matrix is upper triangular matrix");
    }
    else
    {
        printf("The given matrix is not upper triangular matrix");
    }
    return 0;
}
