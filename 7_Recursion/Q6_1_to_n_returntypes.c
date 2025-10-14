#include<stdio.h>
int sum(int x){
    if(x==0 || x==1) return 1;
    int s = x + sum(x-1);
    return s;
}
int main(){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    p = sum(n);
    printf("Your Sum = %d.",p);
    return 0;
}