#include <stdio.h>
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

int hashMidSquare(int data, int arr[])
{
        int temp,len,t,ind;
        temp = data;
        data = data * data;
        len = findlen(data);
        if (len % 2 == 0)
        {
            t = pow(10, (len / 2));
            data = data / t;
            ind = data % 100;
        }
        else
        {
            t = pow(10, (len / 2));
            data = data / t;
            ind = data % 10;
        }
        data = temp;
        arr[ind] = data;
        return ind;
}
int main()
{
    int arr[100];
    for (int i = 0; i < 5; i++)
    {
        int val;
        printf("Enter the id of employee %d: ",i+1);
        scanf("%d", &val);
        int index = hashMidSquare(val,arr);
        arr[index] = val;
        printf("employee %d is stored at %d location\n", i+1, index);
    }
    return 0;
}
