#include<stdio.h>
int main(){
    int i=10, j=i;
    int a=2;
    int j=a+j-1; //This will throe error
    printf("print the value of j:- %d",j); 
    return 0;
}