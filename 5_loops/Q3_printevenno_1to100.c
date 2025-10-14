#include<stdio.h>
int main(){
    int n,i;
    printf("We print Even Number upto your choice.\nEnter the number of your choice: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            printf("%d ",i);
        }else{
            continue;
        }
    }
    return 0;
}