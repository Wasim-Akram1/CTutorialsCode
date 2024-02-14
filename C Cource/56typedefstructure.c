#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;
void Show(emp emp1){
    printf("The code of the employee is: %d\n",emp1.code);
    printf("the salary of the employee is: %f\n",emp1.salary);
    printf("the name of the employee is: %s\n",emp1.name);
}
int main(){
    emp e1;
    emp *ptr;
    ptr= &e1;
    //(*ptr).code=101;
    ptr->code=101;
    ptr->salary=4500;
    strcpy(ptr->name,"Wasim");
    Show(e1);
    printf("The code of the employee is:- %d",e1.code);
    return 0;
}