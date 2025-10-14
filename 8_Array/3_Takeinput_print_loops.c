#include<stdio.h>
int main(){
    int m[10];
    for(int i=0; i<=9; i++){
        printf("Enter a nmuber%d :",i+1);
        scanf("%d",&m[i]);
    }
    for(int j=0;j<=9;j++){
        printf("\nYour nmuer%d is %d.\n",j+1,m[j]);
    }
    return 0;
}