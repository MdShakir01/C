/*#include<stdio.h>
int main(){
    //char a[] = {'H','E','L','L','O','\0'};

    /*char b[]="Hello";
    int i=0; //fer bar bar genne ga kya
    while(i<5){
        printf("%c",b[i]);
        i++;
    }

    char c[] = "Hello Shalir, I am AI assitant. What you want to me today.\0";
    int i=0; // agar \0 use nhi kya to inpute me woh kuch bhe random le lega or display par show kare ga
    while(c[i]!='\0'){
        printf("%c",c[i]);
        i++;
    } // ye jo ek ek character kar k print kar rahe ho to es se acha hoga k string.h labrery ka use karo
    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main(){
    char a[] = "My name is Mohammad Shakir. My collage name is UEM,Kolkata.";
    printf("%s\n",a);
    puts(a);
    puts("My World");
    return 0;
}