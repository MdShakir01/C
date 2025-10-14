#include<stdio.h>
int main(){
    int n;
    printf("I give you half value of your given number.\nEnter your number=");
    scanf("%d",&n);
    int p=(n/2);
    printf("Your Number is %d.\nit's half value is %d.",n,p);
    return 0;
}