#include<stdio.h>
int main(){
    int n;
    printf("Condition 1 to 5 digits numeber=");
    scanf("%d",&n);
    if(n>=0 && n<10){
        printf("Your given number %d is one digits number.",n);
    }if(n>=10 && n<100){
        printf("Your given number %d is Two digits number.",n);
    }if(n>=100 && n<1000){
        printf("Your given number %d is Three digits number.",n);
    }if(n>=1000 && n<10000){
        printf("Your given number %d is Four digits number.",n);
    }if(n>=10000 && n<100000){
        printf("Your given number %d is Five digits number.",n);
    }
    return 0;
}