#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[25];
};
int main(){
    struct employee wasim={60,4500,"wasim"};
    printf("code is: %d \n",wasim.code);
    printf("salary is: %f\n",wasim.salary);
    printf("name is: %s\n",wasim.name);
    return 0;
}