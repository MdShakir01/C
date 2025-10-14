#include<stdio.h>
int main(){
    int n;
    printf(".............We show you Even and odd Number............\n\n");
    printf("Enter a number(except 0) : ");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("\nYour given number %d is Even.\n",n);
    }else{
        printf("\nYour given number %d is Odd.\n",n);
    }
    return 0;
}