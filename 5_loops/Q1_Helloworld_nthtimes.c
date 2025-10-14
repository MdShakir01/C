#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Hello World\n");
        printf("This is the %d times\n",i);
    }
    return 0;
}