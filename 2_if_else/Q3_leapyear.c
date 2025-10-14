#include<stdio.h>
int main(){
    int y;
    printf("..........We find a leapyears..........\n\n");
    printf("Enter a years : ");
    scanf("%d",&y);
    if(y%4 == 0){
        if(y%100 == 0){
            if(y%400 == 0){
                printf("\nYour given year %d is leapyears.",y);
            }
            else{
                printf("\nYour given years %d is not a leapyears.",y);
            }
        }
        else{
            printf("\nYour give years %d is a leapyear.",y);
        }
    }
    else{
        printf("\nYour given years %d is not a leapyear.",y);
    }
    return 0;
}