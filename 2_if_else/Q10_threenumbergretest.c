#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number=");
    scanf("%d",&a);
    printf("Enter 2nd number=");
    scanf("%d",&b);
    printf("Enter 3rd number=");
    scanf("%d",&c);
    if(a>b && a>c){
        if(b>c){
            printf("!st number %d is greatest number and 2nd number %d is second greater number.\n3rd number %d is smaller number.",a,b,c);
        }else{
            printf("!st number %d is greatest number and 3rd number %d is second greater number.\n2nd number %d is smaller number.",a,c,b);
        }
    }if(b>a && b>c){
        if(a>c){
            printf("2nd number %d is greatest number and 1st number %d is second greater number.\n3rd number %d is smaller number.",b,a,c);
        }else{
            printf("2nd number %d is greatest number and 3rd number %d is second greater number.\n2nd number %d is smaller number.",b,c,a);
        }
    }if(c>a && c>b){
        if(a>b){
            printf("3rd number %d is greatest number and 1st number %d is second greater number.\n2nd number %d is smaller number.",c,a,b);
        }else{
            printf("3rd number %d is greatest number and 2nd number %d is second greater number.\n1st number %d is smaller number.",c,b,a);
        }
    }
    return 0;
}