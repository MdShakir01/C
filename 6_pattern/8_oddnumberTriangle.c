#include<stdio.h>
int main(){
    int n;
    printf("..........We want to print a pattern wher i give you a input n=4\n1\n1 3\n1 3 5\n1 3 5 7\n.............\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}