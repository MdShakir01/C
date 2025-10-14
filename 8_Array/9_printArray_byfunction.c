#include<stdio.h>
void fun(int x[]){
    x[3]=125;
}
int main(){
    int n[4]={1,2,3,4};
    printf("%d index %d\n",n[3],3);
    fun(n);
    printf("%d,%d,%d,%d\n index %d",n[0],n[1],n[2],n[3],3);
    return 0;
}