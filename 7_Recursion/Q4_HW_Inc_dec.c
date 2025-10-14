#include<stdio.h>
int table(int c){
    if(c == 0){
        printf("\n");
    return 0;
    }
    printf("%d\n",c);
    table(c-1);
    printf("%d\n",c);
    return 0;
}
int main(){
    int g;
    printf("..........I show you Increasing and decreasing number table..........\n\n");
    printf("Enter a number : ");
    scanf("%d",&g);
    table(g);
    return 0;
}