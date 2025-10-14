#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter 1st number=");
    scanf("%d",&a);
    printf("Enter 2nd number=");
    scanf("%d",&b);
    printf("Enter 3rd number=");
    scanf("%d",&c);
    printf("Enter 4th number=");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("1st number %d is greatest number.",a);
    }if(b>a && b>c && b>d){
        printf("2nd number %d is greatest number.",b);
    }if(c>a && c>b && c>d){
        printf("3rd number %d is greatest number.",c);
    }if(d>a && d>b && d>c){
        printf("4th number %d is greatest number.",d);
    }
    return 0;
}