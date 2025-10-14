#include<stdio.h>
int table(int x){
    if(x==0) return 0;
    table(x-1);
    printf("%d\n",x);
    return 0;
}
int main(){
    int m;
    printf("..........We find a number table..........\n\n");
    printf("Enter your number : ");
    scanf("%d",&m);
    table(m);
    return 0;
}