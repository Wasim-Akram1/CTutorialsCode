/*#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    } while(i<10);
    return 0;
}

QUICK QUIZ 
Write a program to print first n natural number using do-while loop
input:-4
Output:-1
        2   
        3
        4*/
#include<stdio.h>
int main(){
    int i=1;
    int n;
    printf("Enter the number:- \n");
    scanf("%d",&n);
    do{
        printf("%d \n",i);
        i++;
    }while(i<=n);
    return 0;
}