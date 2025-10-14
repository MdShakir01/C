#include<stdio.h>
int main(){
    float p,r,t,si,a;
    printf("Enter the Principal amount= ");
    scanf("%f",&p);
    printf("Enter the Rate of Intrest= ");
    scanf("%f",&r);
    printf("Enter the Time(In Years)= ");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("simple interest is %f",si);
    a = p + si;
    printf("\nTotal Amount to Repay is %f",a);
    return 0;
}