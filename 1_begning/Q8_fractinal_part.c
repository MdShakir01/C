#include<stdio.h>
int main(){
    float n;
    printf("I told you fractional part of your given number.\nEnter your number=");
    scanf("%f",&n);
    int p=n;
    float q=(n-p);
    printf("fractional part of your number is %f.",q);
    return 0;
}