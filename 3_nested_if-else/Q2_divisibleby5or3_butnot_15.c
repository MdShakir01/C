#include<stdio.h>
int main(){
    int b;
    printf("..........We show, Are your number is divisible by 5 or 3 but not 15..........\n\n");
    printf("Enter your number : ");
    scanf("%d",&b);
    if(b % 15 == 0){
        printf("\nError\nplease enter other value.");
    }else{
        if(b % 5 == 0 || b % 3 == 0){
            printf("\nYour given number %d is divisible by 5 or 3.",b);
        }else{
            printf("\nPlease enter correct value.");
        }
    }
    return 0;
}