/*#Quick Quiz 
Create a string using "" and print it contents using a loop */
#include<stdio.h>
int main(){
    char str[]="Wasim";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}