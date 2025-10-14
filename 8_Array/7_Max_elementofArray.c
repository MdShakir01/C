//1st max=-1 or negative inpute lena
//2nd max= INT_MIN le kar banana fer koi v input lena
#include<stdio.h>
#include<limits.h>
int main(){
    int m[7],max=INT_MIN;
    for(int i=0; i<=6; i++){
        printf("Enter the %d Element of the array : \n",i+1);
        scanf("%d",&m[i]);
    }
    for(int j=0; j<=6; j++){
        if(m[j]>max){
            max = m[j];
        }
    }
    printf("Your Maximam Array Element is %d.",max);
    return 0;
}