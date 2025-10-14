
#include<stdio.h>
int main(){
    int k;
    printf("\n..........We are find a number that created by difference of your given arry odd and even indices sum..........\n\n");
    printf("Enter the number of elemnent of the arry = ");
    scanf("%d",&k);
    int n[k];
    for(int i=0; i<k; i++){
        printf("Enter the %d element of Array = ",i+1);
        scanf("%d",&n[i]);
    }
    printf("\nYour given Array = {");
    for(int j=0; j<k; j++){
        if(j<k-1){
            printf("%d,",n[j]);
        }else{
            printf("%d}",n[j]);
        }
    }
    int sume=0;
    int sumo=0;
    for(int p=0; p<k; p++){
        if(p%2==0){
            sume = sume + n[p];//sume += n[p]
        }else{
            sumo = sumo + n[p];//sumo += n[p]
        }
    }
    int t = sume - sumo;
    printf("\n\nYour Number is %d.",t);
    return 0;
}