#include<stdio.h>
int main(){
    int x,y;
    printf("i tolled you.Your given number is lia on X-axsis,Y-axsis and Origin.\nEnter your requried co-ordinate=");
    scanf("%d,%d",&x,&y);
    if(x==0){
        printf("your given co-ordinate %d,%d is lia on Y-axsis.",x,y);
    }else if(y==0){
        printf("your given Co-ordinate %d,%d is lia on X-axsis.",x,y);
    }else if(x==0 && y==0){
        printf("Your given co-ordinate %d,%d is lia on Origine.",x,y);
    }else{
        printf("Your given co-ordinate not lia any other option.");
    }
    return 0;
}