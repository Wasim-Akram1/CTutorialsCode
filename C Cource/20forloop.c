/*#include<stdio.h>
int main(){
    for(int i=0; i<10; i++){
        printf("%d",i);
    }
    return 0;
}

QUICK QUIZ 
Write a program to print first n natural number using for loop
#include<stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n:- \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",i+1);
    }
    return 0;
}

QUICK QUIZ:-
Write a program to print n natural number in reverse order*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:- \n");
    scanf("%d",&n);
    for(int i=n; i; i--){
        printf("%d \n",i);
    }
    return 0;
}