#include<stdio.h>
int main(){
    int n;
    printf("We print a Triangle of Star.\n");
    printf("Enter Row/Height of the Triangle= ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}