#include<stdio.h>
int main(){
    int m[3][2];
    
    for(int i=0; i<3; i++){
        if(i==0){
            printf("Enter the Raghav Roll no and Marks out of 100 = ");
        }
        if(i==1){
            printf("Enter the Rehan Roll no and Marks out of 100 = ");
        }
        if(i==2){
            printf("Enter the Rohan Roll no and Marks out of 100 = ");
        }
        for(int j=0; j<2; j++){
            scanf("%d",&m[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("Your Details is \n");
    for(int x=0; x<3; x++){
        for(int y=0; y<2; y++){
            printf("%d ",m[x][y]);
        }
        printf("\n");
    }
    return 0;
}