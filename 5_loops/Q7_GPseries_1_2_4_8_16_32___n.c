#include<stdio.h>
int main(){
    int n,a=1;
    printf("We give a GP series.\nPlease enter number of term= ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\n",a);
        a=a*2;
    }
    return 0;
}