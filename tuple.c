#include<stdio.h>

int main(){
    int tup[11][3];
    tup[0][0]=4;
    tup[0][1]=4;
    int count=0;
    int k=1;
    int i,j,temp;
    for(i=0;i<4;i++){
        printf("Enter the elements if row %d: ",i+1);
        for(j=0;j<4;j++){
            scanf("%d",&temp);
            if(temp!=0){
                tup[k][0]=i;
                tup[k][1]=j;
                tup[k][2]=temp;
                count++;
                k++;
            }
        }
    }
    tup[0][2]=count;

    printf("Row\tColumn\tValue\n\n");
    for(i=0;i<=count;i++){
        for(j=0;j<3;j++){
            printf("%d\t",tup[i][j]);
        }
        printf("\n");
    }
    return 0;
}
