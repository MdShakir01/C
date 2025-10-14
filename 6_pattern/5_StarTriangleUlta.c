#include<stdio.h>
int main(){
    int n;
    printf("We print a Star Ulta Triangle.\n");
    printf("Enter the Row/Height of Triangle= ");
    scanf("%d",&n);
    int a=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("*");
        }a--;
        printf("\n");
    }
    return 0;
}