#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter co-ordinate x1,y1:");
    scanf("%d,%d",&x1,&y1);
    printf("Enter co-ordinate x2,y2:");
    scanf("%d,%d",&x2,&y2);
    printf("enter co-ordinate x3,y3:");
    scanf("%d,%d",&x3,&y3);
    m1=((y2-y1)/(x2-x1));
    m2=((y3-y2)/(x3-x2));
    if(m1==m2){
        printf("Your given co-ordinate\nx1=%d,y1=%d\nx2=%d,y2=%d\nx3=%d,y3=%d\nmake a straight line because it's slop m1=%d and m2=%d are equal.",x1,y1,x2,y2,x3,y3,m1,m2);
    }else{
        printf("your given co-ordinate is not make straight line.");
    }
    return 0;
}