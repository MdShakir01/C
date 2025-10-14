#include<stdio.h>
int main(){
    int a;
    printf("Enter the values for make Square = ");
    scanf("%d",&a);
    int b = a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}