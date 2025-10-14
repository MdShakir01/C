#include<stdio.h>
int main(){
    int k,m;
    printf("Enter the Row of Matrices = ");
    scanf("%d",&k);
    printf("Enter the Columns of Matrices = ");
    scanf("%d",&m);
    int x[k][m];
    for(int i=0; i<k; i++){
        for(int j=0; j<m; j++){
            printf("Enter the [%d,%d] Element of Matrices = ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    printf("Your given Matrices is \n");
    for(int i=0; i<k; i++){
        for(int j=0; j<m; j++){
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }
    printf("Your Matrices have total Element summition is\n");
    int sum = 0;
    for(int i=0; i<k; i++){
        for(int j=0; j<m; j++){
            sum = x[i][j] + sum;
        }
    }
    printf("%d",sum);
    return 0;
}