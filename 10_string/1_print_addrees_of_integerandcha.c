#include<stdio.h>
int main(){
    int k[]={3,4,6,7,6,8};
    printf("%p\n",&k[0]);
    printf("%p\n",&k[1]);
    printf("%p\n",&k[2]);
    printf("%p\n",&k[3]);
    printf("%p\n",&k[4]);
    printf("\n");
    char arr[]={'A','B','a','b','c','d'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    printf("%p\n",&arr[5]);
    return 0;
}