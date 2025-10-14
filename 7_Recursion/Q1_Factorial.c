#include<stdio.h>
int fac(int x){
    if(x == 1) return 1;
    return x * fac(x-1);
}
/*int fac(int y){
    int b=1;
    for(int i=1; i<=y; i++){
        b = b*i;
    }
    return b;
}*/
int main(){
    int T,m;
    printf("..........We find Factorial of a number..........\n\n");
    printf("Enter a number : ");
    scanf("%d",&m);
    T = fac(m);
    printf("\nYour given number is %d and it's factorial is %d.",m,T);
    return 0;
}