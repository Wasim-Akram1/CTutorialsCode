#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:- \n");
    scanf("%d",&age);
    if(age>=90){
        printf("you are above too old, you cant drive.\n",age);
    }
    else{
        printf("You can Drive \n",age);
    }
    if (age==50){
        printf("Congratulation You have completed half century");
    }
    return 0;
}