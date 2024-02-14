/*#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1;
    e1.code=60;
    e1.salary=4500;
    strcpy(e1.name, "wasim");
    printf("The code of employee is %d \n",e1.code);
    printf("the salary of employee is %3f \n",e1.salary);
    printf("the name of the employee is %s \n",e1.name);
    return 0;
}

#QUICK QUIZ 
Write a program to store the details of 3 employees from user defined data use the struct declared above. */
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[25];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the code of e1:-\n");
    scanf("%d",&e1.code);
    printf("Enter the salary of e1:-\n");
    scanf("%f",&e1.salary);
    printf("Enter the name of e1:-\n");
    scanf("%s",e1.name);
    printf("Enter the code of e2:-\n");
    scanf("%d",&e2.code);
    printf("Enter the salary of e2:-\n");
    scanf("%f",&e2.salary);
    printf("Enter the name of e2:-\n");
    scanf("%s",e2.name);
    printf("Enter the code of e3:-\n");
    scanf("%d",&e3.code);
    printf("Enter the salary of e3:-\n");
    scanf("%f",&e3.salary);
    printf("Enter the name of e3:-\n");
    scanf("%s",e3.name);
    return 0;
}

