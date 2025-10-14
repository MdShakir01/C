#include<stdio.h>
int main(){
    int k,l;
    printf("\n..........We show you your 2D Array..........\n\n");
    printf("Enter the Dimension of your 2D array Row,Columne = ");
    scanf("%d",&k);
    scanf("\n%d",&l);
    int m[k][l];
    for(int i=0; i<k; i++){
        for(int j=0; j<l; j++){
            printf("Enter the element (%d,%d) = ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }printf("\n");
    }
    printf("\nYour given 2D Array is\n");
    for(int e=0; e<k; e++){
        for(int t=0; t<l; t++){
            printf("%d ",m[e][t]);
        }printf("\n");
    }
    printf("\n..........Thank you..........");
    return 0;
}