#include<stdio.h>
int main(){
    int n;
    printf("..........We print a partten of number where i give you n=4 than you print \n1 2 3 4\n1 2 3\n1 2\n1\n..........\n");
    printf("Enter a number as you wish : ");
    scanf("%d",&n);
    if(n>0){
        for(int i = 1; i <= n; i++){
            for(int j=1; j<=n+1-i; j++){
                printf("%d ",j);
            }
            printf("\n");
        }
    }else{
        printf("Please enter a any number except 0 and negative number.\nThank you");
    }
    return 0;
}