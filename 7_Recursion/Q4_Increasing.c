#include<stdio.h>
int Inc(int x){
    if(x==0) return 1;
    Inc(x-1);
    printf("%d\n",x);
    return 0;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Inc(n);
    return 0;
}