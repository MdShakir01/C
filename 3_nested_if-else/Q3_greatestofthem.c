#include<stdio.h>
int main(){
    int a,b,c;
    printf("..........We show,Realtion between your given number..........\n\n");
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    printf("\n1st number = %d.\n",a);
    printf("2nd number = %d.\n",b);
    printf("3rd number = %d.\n",c);
    if(a>b && a>c){
        if(b>c){
            printf("\nYour given number relation,\n\n1st number %d > 2nd number %d > 3rd number %d.",a,b,c);
        }else{
            printf("\nYour given number relation,\n\n1st number %d > 3rd number %d > 2nd number %d.",a,c,b);
        }
    }if(b>a && b>c){
        if(a>c){
            printf("\nYour given number relation,\n\n2nd number %d > 1st number %d > 3rd number %d.",b,a,c);
        }else{
            printf("\nYour given number relation,\n\n2nd number %d > 3rd number %d > 1st number %d.",b,c,a);
        }
    }if(c>a && c>b){
        if(a>b){
            printf("\nYour given number relation,\n\n3rd number %d > 1st number %d > 2nd number %d.",c,a,b);
        }else{
            printf("\nYour given number relation,\n\n3rd number %d > 2nd number %d > 1st number %d.",c,b,a);
        }
    }
    return 0;
}
