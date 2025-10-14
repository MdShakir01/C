#include<stdio.h>
/*int pow(int x,int y){
    int T=1;
    for(int i=1; i<=y; i++){
        T=x*T;
    }
    return T;
}*/

int pow(int x,int y){
    if(y==0) return 1;
    int m=x*pow(x,y-1);
    return m;
}
int main(){
    int n,p,s;
    printf("...........We find any power of any number...........\n");
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("Enter your power = ");
    scanf("%d",&p);
    s = pow(n,p);
    printf("your given number %d and your given power %d, it have total = %d.",n,p,s);
    return 0;
}
