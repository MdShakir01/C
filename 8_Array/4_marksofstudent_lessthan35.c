#include<stdio.h>
int main(){
    int m[10]={60,75,67,89,21,30,34,35,40,90};
    for(int i=0; i<=9; i++){
        if(m[i]<35){
            printf("\nA student have less than 35 marks which rolls number %d and it's marks is %d.\n",i+1,m[i]);
        }
    }
    return 0;
}