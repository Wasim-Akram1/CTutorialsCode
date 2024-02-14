/*#include<stdio.h>
int main(){
    int rating;
    printf("Enter the rating(1-5)\n");
    scanf("%d", &rating);
    switch(rating){
    case 1:
    printf("your rating is 1");
    break;
    case 2:
    printf("your rating is 2");
    break;
    case 3:
    printf("your rating is 3");
    break;
    case 4:
    printf("your rating is 4");
    break;
    case 5:
    printf("your rsting is 5");
    break;
    case 6:
    printf("invalid rating ");
    break;
    }
    return 0;
}

Quick QUIZ
Write a program to find grade of a student given his marks based on below:-
90-100-A
80-90-B
70-80-C
60-70-D
<60-FAIL*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of a student(0-100)\n");
    scanf("%d", &marks);
    switch(marks/10){
        case 9:
        printf("your grade is A");
        break;
        case 8:
        printf("your grade is B");
        break;
        case 7:
        printf("your grade is C");
        break;
        case 6:
        printf("Your grade is D");
        break;
        default:
        printf("you are fail");
        break;
    }
    return 0;
}