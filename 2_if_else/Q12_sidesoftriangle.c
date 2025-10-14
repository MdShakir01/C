#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st side=");
    scanf("%d",&a);
    printf("Enter 2nd side=");
    scanf("%d",&b);
    printf("Enter 3rd side=");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("Your given sides %d %d %d make a triangle.",a,b,c);
    }else{
        printf("Your given sides %d %d %d is not make a triangle.",a,b,c);
    }
    return 0;
}