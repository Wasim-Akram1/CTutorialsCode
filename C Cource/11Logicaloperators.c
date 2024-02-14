#include<stdio.h>
int main(){
    int age;
    int vippass;
    printf("Enter the age:- ");
    scanf("%d",&age);
    if((age<=70 && age>=18) || (vippass==1)){
        printf("You can drive \n");
    }
    else{
        printf("You cant drive \n");
    }
    return 0;
}