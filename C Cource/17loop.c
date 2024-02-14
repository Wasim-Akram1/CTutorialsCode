/*#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    while(a<10){
        printf("%d",a);
        a++;
    }
    return 0;
}

Quick Quiz
1.Write a program to print natural number from 10 to 20 when initial loop counter is intialized to 0.*/
#include<stdio.h>
int main(){
    int i=0;
    while(i<=20){
        if(i>=10){
        printf("%d \n",i);
        }
        i++;
    }
    return 0;
}