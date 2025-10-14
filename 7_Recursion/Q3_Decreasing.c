#include<stdio.h>
int table(int v){
    if(v == 0) return 0;
    printf("%d\n",v);
    table(v-1);
    return 0;
}
int main(){
    int m;
    printf("..........We find number table..........\n\n");
    printf("Enter a number : ");
    scanf("%d",&m);
    table(m);
    return 0;
}