#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("the value is %d", i);
        if(i==4){
            break;
        }
        i++;
    }while(i<10);
}