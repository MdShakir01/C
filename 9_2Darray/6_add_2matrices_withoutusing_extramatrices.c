#include<stdio.h>
void input(int w,int q,int t[w][q]){
    for(int i=0; i<w; i++){
        for(int j=0; j<q; j++){
            printf("Enter the element of [%d,%d] = ",i+1,j+1);
            scanf("%d",&t[i][j]);
        }
    printf("\n");
    }
}
void output(int h,int p,int u[h][p]){
    for(int i=0; i<h; i++){
        for(int j=0; j<p; j++){
            printf("%d  ",u[i][j]);
        }
    printf("\n");
    }
}
int main(){
    int k,S,d,f;
    printf("..........We show addition of 2 Matrices..........\n\n");
    printf("Enter the Row of 1st Matrices = ");
    scanf("%d",&k);
    printf("Enter the Columns of 1st Matrices = ");
    scanf("%d",&S);
    printf("Enter the Row of 2nd Matrices = ");
    scanf("%d",&d);
    printf("Enter the columns of 2nd Matrices = ");
    scanf("%d",&f);
    if(k==d && S==f){
        int x[k][S],y[d][f];
        printf("\nEnter the element of 1st Matrices\n");
        input(k,S,x);
        printf("\nEnter the element of 2nd Matrices\n");
        input(d,f,y);
        printf("Your 1st Matrices Element is\n");
        output(k,S,x);
        printf("Your 2nd Matrices Element is\n");
        output(d,f,y);
        printf("\nAddition of 2 Matrices\n");
        for(int i=0; i<k; i++){
            for(int j=0; j<d; j++){
                printf("%d + %d=%d  ",x[i][j],y[i][j],x[i][j]+y[i][j]);
            }
        printf("\n");
        }
    }else{
        printf("Addition only valide for Square Matrices.\n   Thanks You");
    }
    
    return 0;
}