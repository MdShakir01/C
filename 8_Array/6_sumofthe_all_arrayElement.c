#include<stdio.h>
int main(){
    int n=0,m[7]={6,4,8,2,8,9,5};
    for(int i=0; i<=6; i++){
        printf("Given array element is %d.\n",m[i]);
    }
    for(int j=0; j<=6; j++){
        n = n + m[j];
    }
    printf("Sum of all element of given array is %d.\n",n);
    return 0;
}