#include<stdio.h>
int main(){
    FILE *ptr;
    /*ptr=fopen("60asample.txt","r");
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    printf("%c\n",fgetc(ptr));*/
    ptr=fopen("60asample.txt","w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
    return 0;
}