#include <stdio.h>

int main()
{

    int i, j;
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
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
            if (((i - j != 0) || (i - j != 1) || (i - j != -1)) && arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count == n*n - (3*n-2))
    {
        printf("The given matrix is tridiagonal");
    }
    else
    {
        printf("The given matrix is not tridiagonal");
    }
    return 0;
}
