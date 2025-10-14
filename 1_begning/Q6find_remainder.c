#include <stdio.h>
int main(){
    int a,b;
    printf("We find remainder of two number which given by you but 1st number > 2nd number.\nEnter your 1st integer=");
    scanf("%d",&a);
    printf("Enter your 2nd integer=");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(q*b);
    printf("Your two number 1st is %d and 2nd is %d have remainder is %d.",a,b,r);
    return 0;
}