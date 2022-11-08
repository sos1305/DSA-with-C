#include <stdio.h>
int hashFolding(int num)
{
    int a = num % 100;
    num /= 100;
    int b = num % 100;
    num /= 100;
    int c = num;
    int hash = (a + b + c) % 100;
    return hash;
}

int main()
{
    int arr[100];
    for (int i = 0; i < 5; i++)
    {
        int val;
        printf("Enter the employee id: ");
        scanf("%d", &val);
        int index = hashFolding(val);
        arr[index] = val;
        printf("Employee %d is stored at location %d\n", i, index);
    }
    return 0;
}
