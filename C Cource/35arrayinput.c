/*#include<stdio.h>
int main(){
    int marks[4];
    printf("Enter the marks 1:-");
    scanf("%d",&marks[0]);
    printf("Enter the marks 2:-");
    scanf("%d",&marks[1]);
    printf("Enter the marks 3:-");
    scanf("%d",&marks[2]);
    printf("enter the marks 4:-");
    scanf("%d",&marks[3]);
    printf("the marks entered is:- %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}

# QUICK QUIZ
Write a program to accept marks of five student in an array and print them to the screen*/
#include<stdio.h>
int main(){
    int student[5];
    for(int i=0; i<5; i++){
        printf("enter the marks of student %d:- ",i+1);
        scanf("%d",&student[i]);
    }
    for(int i=0; i<5; i++){
        printf("the entered marks of student %d is %d \n:- ",i+1,student[i]);
    }
    return 0;
}