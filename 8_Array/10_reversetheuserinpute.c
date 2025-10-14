//1st without using function
//2nd using function with formula array are given arr[2]={2,9}
/*
#include<stdio.h>
int main(){
    int j[7];
    printf("..........We are print reverse of your given Array..........\n\n");
    for(int i=0; i<=6; i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&j[i]);
    }
    printf("\nYour given Array = {");
    for(int x=0; x<=6; x++){
        if(x<6){
            printf("%d,",j[x]);
        }else{
            printf("%d",j[x]);
        }
    }
    printf("}.\n");
    printf("\n\n.....Your reverse array.....\n\n");
    printf("{");
    for(int g=6; g>=0; g--){
        if(g>0){
            printf("%d,",j[g]);
        }else{
            printf("%d}",j[g]);
        }
    }
    return 0;
}
    */

#include<stdio.h>
void fun(int x[]){
    int temp= x[0];
    x[0]=x[1];
    x[1]=temp;
    return ;
}
int main(){
    int arr[2]={2,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}