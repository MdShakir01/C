#include<stdio.h>
int main(){
    int n,k;
    printf("Please provide the number you want to compare : ");
    scanf("%d",&n);
    printf("\n\nProvide the number of Array Element : ");
    scanf("%d",&k);
    int m[k];
    for(int i=0; i<k; i++){
        printf("Enter the %d Element of the Array : ",i+1);
        scanf("%d",&m[i]);
    }
    printf("\n\nYour Array is = {");
    for(int l=0; l<k; l++){
        if(l<k-1){
            printf("%d,",m[l]);
        }else{
            printf("%d}",m[l]);
        }
    }
    int count=0;
    for(int j=0; j<k; j++){
        if(m[j]>n){
            count++;
        }
    }
    printf("\n\nYour given array has %d element which greaterthan %d.",count,n);
    return 0;
}