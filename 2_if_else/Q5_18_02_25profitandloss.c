#include<stdio.h>
int main(){
    float cp,sp,p,l;
    printf("Enter your cost price= ");
    scanf("%f",&cp);
    printf("Enter your selling price= ");
    scanf("%f",&sp);
    p=sp-cp;
    l=-(sp-cp);
    if(cp!=sp){
        if(sp>cp){
            printf("Your cost price is %f and selling price is %f. You have a profit of %f.",cp,sp,p);
        }else{
            printf("Your cost price is %f and selling price is %f. You have a loss of %f.",cp,sp,l);
        }
    }else{
        printf("You have no profit and no loss because your cost price and selling price are same i.e. %f.",cp);
    }
    return 0;
}