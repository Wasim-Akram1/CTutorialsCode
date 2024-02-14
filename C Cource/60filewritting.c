#include<stdio.h>
int main(){
    FILE *fptr;
    int number =98;
    fptr=fopen("60asample.txt","w");
    fprintf(fptr,"the number is %d",number);
    fprintf(fptr,"thanks for using fprintf");
    fclose(fptr);
    return 0;
}