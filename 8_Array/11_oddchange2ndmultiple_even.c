#include<stdio.h>
int main(){
    int n[7],m[7];
    printf("..........I update your Array odd indices element by 2nd multiple and even indices increase by 10..........\n\n");
    for(int h=0; h<=6; h++){
        printf("Enter Array Element %d = ",h+1);
        scanf("%d",&n[h]);
    }
    printf("\nYour given Array = {");
    for(int x=0; x<=6; x++){
        if(x<6){
            printf("%d,",n[x]);
        }else{
            printf("%d}\n\n",n[x]);
        }
    }
    for(int i=0; i<=6; i++){
        if(i % 2 == 0 || i == 0){
            m[i] = n[i]*2;
        }else{
            m[i] = n[i] + 10;
        }
    }
    printf("Your updated Answer = {");
    for(int j=0; j<=6; j++){
        if(j==6){
            printf("%d}",m[j]);
        }else{
            printf("%d,",m[j]);
        }
    }
    return 0;
}