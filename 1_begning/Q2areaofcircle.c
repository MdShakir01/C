#include<stdio.h>
/*int main(){
    float n,a;
    n=5;
    printf("Your input radius=%f\n",n);
    a=(22.0/7.0)*(n*n);
    printf("Area of Circle=%f",a);
    return 0;
}*/
int main(){
    float n,a;
    printf("Enter the value of radius=");
    scanf("%f",&n);
    a=(22.0/7.0)*(n*n);
    printf("Area of circle is %f with radius %f.",a,n);
    return 0;
}