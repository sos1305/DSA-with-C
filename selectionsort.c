#include <stdio.h>

void selectionsortrec(int arr[], int n, int start){
    int minpos=start;
    if(start>=n-1){
        return;
    }
    int i;
    for(i=start+1;i<n;i++){
        if(arr[i]>arr[minpos]){
            minpos=i;
        }
        int temp=arr[i];
        arr[i]=arr[minpos];
        arr[minpos]=temp;
    }
    selectionsortrec(arr,n,start+1);

}

int main()
{
    int arr[5];
    printf("Enter the elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             arr[i] = arr[i] + arr[j];
    //             arr[j] = arr[i] - arr[j];
    //             arr[i] = arr[i] - arr[j];
    //         }
    //     }
    // }
    printf("The list after applying selection sort is: ");
    selectionsortrec(arr,5,0);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
