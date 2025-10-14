#include<stdio.h>
#include<limits.h>
void s(int m,int l,int b[m][l]){
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            printf("Enter the [%d,%d] Element of Matrices = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
}
void p(int u, int g,int o[u][g]){
    for(int i=0; i<u; i++){
        for(int j=0; j<g; j++){
            printf("%d  ",o[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,k;
    printf("Enter the Row of Matrices = ");
    scanf("%d",&n);
    printf("Enter the Columns of Matrices = ");
    scanf("%d",&k);
    int x[n][k];
    s(n,k,x);
    p(n,k,x);
    int min = INT_MAX; 
    int max = INT_MIN;
    int max_r = 0 , max_c = 0, min_r=0, min_c=0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            if(max < x[i][j]){
                max = x[i][j];
                max_r=i;
                max_c=j;
            }
            if(min > x[i][j]){
                min = x[i][j];
                min_r=i;
                min_c=j;
            }
        }
    }
    printf("\nYour Matrices Maximum Element is %d at location [%d,%d].",max,max_r+1,max_c+1);
    printf("\nYour Matrices Minimam Element is %d at location [%d,%d].",min,min_r+1,min_c+1);
    return 0;
}