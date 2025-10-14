#include<stdio.h>
int main(){
    int n;
    printf("Enter your parcentage= ");
    scanf("%d",&n);
    if(n<=100 && n>=91){
        printf("Your parcentage is %d. You have A+ grade.",n);
    }else if(n<=90 && n>=81){
        printf("Your parcentage is %d. You have A grade.",n);
    }else if(n<=80 && n>=71){
        printf("Your parcentage is %d. You have B+ grade.",n);
    }else if(n<=70 && n>=61){
        printf("Your parcentage is %d. You havr B grade.",n);
    }else if(n<=60 && n>=51){
        printf("Your parcentage is %d. you have C+ grade.",n);
    }else if(n<=50 && n>=41){
        printf("your parcentage is %d. You have C grade.",n);
    }else{
        printf("Your parcentage is %d. You are fail(F).",n);
    }
    return 0;
}