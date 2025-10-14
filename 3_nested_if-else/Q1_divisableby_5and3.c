#include<stdio.h>
int main(){
    int j;
    printf("..........We show, Are your given number divisible by 5 and 3..........\n\n");
    printf("Enter your given number : ");
    scanf("%d",&j);
    if(j % 5 == 0){
        if(j % 3 == 0){
            printf("\nYour given number %d is divisible by 5 amd 3.",j);
        }else{
            printf("\nYour given number %d is not divisible by 5 and 3.",j);
        }
    }else{
        printf("\nYour given number %d is not divisible by 5 and 3.",j);
    }
    return 0;
}