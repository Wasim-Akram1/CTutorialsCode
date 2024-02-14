#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[25];
};
int main(){
    struct employee fb[100];
    fb[0].code=60;
    fb[0].salary=4500;
    strcpy(fb[0].name,"Wasim");
    fb[1].code=61;
    fb[1].salary=4000;
    strcpy(fb[1].name,"Yash");
    printf("Done");
    return 0;
}