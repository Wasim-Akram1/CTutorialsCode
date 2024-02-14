#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:- ");
    scanf("%d",&num);
    if(num==1){
        printf("Your number is one:- ");
    }
    else if(num==2){
        printf("Your number is 2");
    }
    else if(num==3){
        printf("Your number is 3");
    }
    else{
        printf("Your number is not desired");
    }
    return 0;
}