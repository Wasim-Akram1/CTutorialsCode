#include<stdio.h>
#include<string.h>
int main(){
    char st1[45]="Hellow";
    char *st2="Wasim";
    strcat(st1, st2);
    printf("Now the st1 is %s",st1);
    return 0;
}