#include<stdio.h>
int main(){
    int A,P,L,B;
    printf("I told yuo Area of reactangle that greater to parimetr.\n\nEnter the length of Reactangle=");
    scanf("%d",&L);
    printf("Enter Breath of reatangle=");
    scanf("%d",&B);
    A=(L*B);
    P=(2*(L+B));
    if(A>P){
        printf("Length=%d and Breath=%d.\nIt's Area=%d and Parimeter=%d.\nIt's Area is greater to parimeter.",L,B,A,P);
    }
    else{
        printf("please give any other input integer.");
    }
    return 0;
}