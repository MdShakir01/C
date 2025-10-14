#include<stdio.h>
/*int main(){
    printf("..........We show addition of Two Matrices..........\n\n");
    int n,m,k,p;
    printf("Enter the number of Rows of 1st matrices = ");
    scanf("%d",&n);
    printf("Enter the number of columns of 1st matrices = ");
    scanf("%d",&m);
    printf("Enter the number of rows of 2nd matrices = ");
    scanf("%d",&k);
    printf("Enter the number of columns of 2nd matrices = ");
    scanf("%d",&p);
    if(n==m && k==p){
        int x[n][m],y[k][p];
        printf("Enter the Element of 1st matrices\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("Enter the Element of [%d,%d] = ",i+1,j+1);
                scanf("%d",&x[i][j]);
            }
            printf("\n");
        }
        printf("Enter the Element of 2nd matrices\n");
        for(int s=0; s<k; s++){
            for(int d=0; d<p; d++){
                printf("Enter the Element of [%d,%d] = ",s+1,d+1);
                scanf("%d",&y[s][d]);
            }
            printf("\n");
        }
        printf("\nYour 1st Matrices is\n");
        for(int l=0; l<n; l++){
            for(int u=0; u<m; u++){
                printf("%d  ",x[l][u]);
            }
            printf("\n");
        }
        printf("\nYour 2nd Matrices is\n");
        for(int t=0; t<k; t++){
            for(int g=0; g<p; g++){
                printf("%d  ",y[t][g]);
            }
            printf("\n");
        }
        int r[m][k];
        for(int i=0; i<m; i++){
            for(int j=0; j<k; j++){
                r[i][j] = x[i][j]+y[i][j];
            }
        }
        printf("\nYour Resulted Matrices is\n");
        for(int a=0; a<m; a++){
            for(int b=0; b<k; b++){
                printf("%d  ",r[a][b]);
            }
            printf("\n");
        }
    }else{
        printf("\nAddition of 2 matrices valide for only square matrices.\n\n     Try again");
    }
    return 0;
}*/

void scn(int t,int w,int x[t][w]){
    for(int i=0; i<t; i++){
            for(int j=0; j<w; j++){
                printf("Enter the Element of [%d,%d] = ",i+1,j+1);
                scanf("%d",&x[i][j]);
            }
            printf("\n");
        }
}
void prn(int O,int b,int v[O][b]){
    for(int l=0; l<O; l++){
            for(int u=0; u<b; u++){
                printf("%d  ",v[l][u]);
            }
            printf("\n");
        }
}
int main(){
    printf("..........We show addition of Two Matrices..........\n\n");
    int n,m,k,p;
    printf("Enter the number of Rows of 1st matrices = ");
    scanf("%d",&n);
    printf("Enter the number of columns of 1st matrices = ");
    scanf("%d",&m);
    printf("Enter the number of rows of 2nd matrices = ");
    scanf("%d",&k);
    printf("Enter the number of columns of 2nd matrices = ");
    scanf("%d",&p);
    if(n==m && k==p){
        int x[n][m],y[k][p];
        printf("Enter the Element of 1st matrices\n");
        scn(n,m,x);
        printf("Enter the Element of 2nd matrices\n");
        scn(k,p,y);
        printf("\nYour 1st Matrices is\n");
        prn(n,m,x);
        printf("\nYour 2nd Matrices is\n");
        prn(k,p,y);
        int r[m][k];
        for(int i=0; i<m; i++){
            for(int j=0; j<k; j++){
                r[i][j] = x[i][j]+y[i][j];
            }
        }
        printf("\nYour Resulted Matrices is\n");
        prn(m,k,r);
    }else{
        printf("\nAddition of 2 matrices valide for only square matrices.\n\n     Try again");
    }
    return 0;
}
