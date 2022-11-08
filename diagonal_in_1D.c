#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int arr[n * (n + 1) / 2];
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of row %d: ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &temp);
            if (i == j)
            {
                arr[i] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d\t", arr[i]);
            }
            else
            {
                printf("0\t");
            }
        }
    }
    return 0;
}
