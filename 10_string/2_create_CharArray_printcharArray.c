#include<stdio.h>
int main(){
    /*char arr[]={'H','e','l','l','o'};
    for(int i=0; i<5;i++){
        printf("%c",arr[i]);
    }*/

    /*char a[]={'H','e','l','l','o',' ','W','o','r','l','d'};
    for(int i=0; i<11; i++){ //Bada string rahe ga ya fer bohot zada inpute to kya baith kar genno ge nhi na '\0'
        printf("%c",a[i]);
    }*/

    char b[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    int i=0;//kya bar bar aise he likhna hoga es me time zada nhi jaye ga kya isliye string ka concept aya hai
    while(b[i] != '\0'){
        printf("%c",b[i]);
        i++;
    }
    return 0;
}