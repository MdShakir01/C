#include<stdio.h>
int main(){
    int n[6]={4,6,2,9,1,8};
    for(int i=0; i<=5; i++){
        printf("Address of Array Element %d is %d.\n",i+1,&n[i]);
    }
    return 0;
}