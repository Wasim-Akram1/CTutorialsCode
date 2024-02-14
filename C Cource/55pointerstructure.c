/*#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=101;
    ptr->code=101;
    printf("%d",e1.code);
    return 0;
}

QuickQuiz
Complete the show function to display the content of employee. */
#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
void Show(struct employee emp){
    printf("The code of the employee is: %d\n",emp.code);
    printf("the salary of the employee is: %f\n",emp.salary);
    printf("the name of the employee is: %s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    //(*ptr).code=101;
    ptr->code=101;
    ptr->salary=4500;
    strcpy(ptr->name,"Wasim");
    Show(e1);
    printf("The code of the employee is:- %d",e1.code);
    return 0;
}