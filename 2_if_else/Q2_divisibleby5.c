#include<stdio.h>
int main(){
    int m;
    printf("..........We show a number which is divisible by 5..........\n\n");
    printf("Enter a number : ");
    scanf("%d",&m);
    if(m%5 == 0){
        printf("\nYour given number %d is divisible by 5.",m);
    }else{
        printf("\nPlease enter a correct number.",m);
    }
    return 0;
}