#include<stdio.h>
int stair(int x){
    if(x==1) return 1;
    if(x==2) return 2;
    int ways= stair(x-1) + stair(x-2);
    return ways;
}
int main(){
    int n;
    printf("..........We are Caculate Stair Path which Consider single and double steps..........\n\n");
    printf("Enter number of Stair = ");
    scanf("%d",&n);
    int h = stair(n);
    printf("\n\nYour Given stair is %d and your Total ways = %d.",n,h);
    return 0;
}