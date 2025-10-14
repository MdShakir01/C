#include<stdio.h>
int fib(int x){
    if(x == 1 || x == 2) return 1;
    int ans1 = fib(x-1);
    int ans2 = fib(x-2);
    int res = ans1 + ans2;
    return res;
}
int main(){
    int n,T;
    printf("............We print fibonacci Series............\n\n");
    printf("Enter a number of term : ");
    scanf("%d",&n);
    T = fib(n);
    printf("\nYour given number of term is %d and it's have %d fiboncci number.",n,T);
    return 0;
} 