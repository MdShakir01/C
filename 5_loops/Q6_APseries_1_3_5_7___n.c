/*#include<stdio.h>
int main(){
    int n;
    printf("Enter last number of your AP=");
    scanf("%d",&n);
    printf("AP Series=");
    for(int i=1;i<=n;i=i+2){
        printf("%d ",i);
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int n,m=1;
    printf("We give you a AP Series.\nPlease give me it's last term= ");
    scanf("%d",&n);
    printf("1st term of AP = %d.\n",m);
    for(int i=2; i<=n; i++ ){
        m=m+2;
        printf("%d term of AP = %d.\n",i,m);
    }
    return 0;
}