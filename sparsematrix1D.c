#include<stdio.h>

int main(){
    int n;
    int temp;
    printf("Enter the dimensions of the square matrix: ");
    scanf("%d",&n);
    int arr[n*(n+1)/2];
    int x=0;
    for(int i=0;i<n;i++){
        printf("Enter the elements of row %d: ",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&temp);
            if(temp!=0){
                arr[x]=temp;
                x++;
            }
        }
    }

    return 0;
}
