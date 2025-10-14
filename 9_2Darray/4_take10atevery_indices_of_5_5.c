#include<stdio.h>
int main(){
    int n=10,m[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            m[i][j] = n;
        }
    }
    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){
            printf("%d ",m[x][y]);
        }
        printf("\n");
    }
    return 0;
}