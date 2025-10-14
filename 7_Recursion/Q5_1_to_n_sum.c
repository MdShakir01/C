#include<stdio.h>
void sum(int x,int y){
    if(x==0){
        printf("%d",y);
    }
    sum(x-1,x+y);
    return ;
}
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}