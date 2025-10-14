#include<stdio.h>
int main(){
    int a,b;
    printf("Please Enter the value of Rows < Values of Columns.\n");
    printf("Enter the Rows = ");
    scanf("%d",&a);
    printf("Enter the columns = ");
    scanf("%d",&b);
    if(a<b){
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        printf("Please Enter Conditional Values.\nThanks");
    }
    return 0;
}