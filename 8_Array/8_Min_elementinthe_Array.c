#include<stdio.h>
#include<limits.h>
int main(){
    int m[6];
    for(int i=0; i<=5; i++){
        printf("Enter the number %d you want : ",i+1);
        scanf("%d",&m[i]);
    }
    printf("\nYour number is {");
    for(int j=0; j<=5; j++){
        if(j<5){
            printf("%d,",m[j]);
        }else{
            printf("%d",m[j]);
        }
    }
    printf("}\n");
    int n=INT_MAX;
    for(int k=0; k<=5; k++){
        if(n>m[k]){
            n = m[k];
        }
    }
    printf("\nIn your given number {");
    for(int j=0; j<=5; j++){
        if(j<5){
            printf("%d,",m[j]);
        }else{
            printf("%d",m[j]);
        }
    }
    printf("} have %d is minimum number.",n);

    return 0;
}