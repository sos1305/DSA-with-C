#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findlen(int l)
{
    int cnt;
    cnt = 0;
    while (l > 0)
    {
        cnt++;
        l = l / 10;
    }
    return cnt;
}

int main()
{
    int choice, arr[100], len, ind, temp;
    long int data, t;
    printf("\n Enter employee data \n");
    scanf("%d", &data);
    printf("Enter the choice of Hash function method");
    printf("\n1. Division Method");
    printf("\n2. Mid Square method");
    printf("\n3. Folding Method");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n Division Method");
        ind = data % 101;
        printf("\n ind=%d", ind);
        arr[ind] = data;
        break;
    case 2:
        printf("\nMid Square Method");
        temp = data;
        data = data * data;
        printf("Sq=%ld", data);
        len = findlen(data);
        printf("Length=%d", len);
        if (len % 2 == 0)
        {
            t = pow(10, (len / 2));
            printf("pow=%d", t);
            data = data / t;
            ind = data % 100;
            printf("\n if block len%d t=%d ind %d", len, t, ind);
        }
        else
        {
            t = pow(10, (len / 2));
            printf("pow=%d", t);
            data = data / t;
            ind = data % 10;
            printf("\n else block en%d t=%d ind %d", len, t, ind);
        }
        data = temp;
        arr[ind] = data;

        break;
    case 3:
        temp = data;
        ind = 0;
        while (temp > 0)
        {
            ind = ind + temp % 100;
            temp = temp / 100;
        }
        if (ind >= 100)
        {
            ind = ind % 100;
        }
        printf("\n ind=%d", ind);
        arr[ind] = data;
    }

    return 0;
}