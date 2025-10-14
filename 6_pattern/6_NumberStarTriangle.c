#include<Stdio.h>
int main(){
    int n;
    printf("We print Number Star Triangle.\n");
    printf("Enter number of Row/Height of Triangle= ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}