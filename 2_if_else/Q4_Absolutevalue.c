#include<stdio.h>
int main(){
    int n,a;
    printf("We show only absolute value of a number.\n");
    printf("Enter any Integer= ");
    scanf("%d",&n);
    if(n<0){
        a = -n;
        printf("The absolute value of %d is %d.",n,a);
    }else{
        printf("The absolute value of %d is %d.",n,n);
    }
    return 0;
}