#include<stdio.h>
int main(){
    int n;
    printf("Enter a Integer=");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Your given number %d is divisable by 5 and 3.",n);
    }else{
        printf("Your given number %d is not divisable by 5 and 3.",n);
    }
    return 0;
}