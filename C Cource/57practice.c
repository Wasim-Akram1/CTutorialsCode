/*1.Create a teo dimensional vector using structure in c 
#include<stdio.h>
struct vector{
    int x;
    int y;
};
int main(){
    struct vector v1, v2;
    v1.x=34;
    v1.y=54;
    printf("x dim is %d and y dim is %d \n",v1.x,v1.y);
    v2.x=60;
    v2.y=61;
    printf("x dim is %d and y dim is %d \n",v2.x,v2.y);
    return 0;
}

2.Write a functiomn sum vector which returns the sum of two vwctor passed to it. The Vector must be two dimensional.
#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1, struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main(){
    struct vector v1, v2, sum;
    v1.x=34;
    v1.y=54;
    printf("x dim is %d and y dim is %d \n",v1.x,v1.y);
    v2.x=60;
    v2.y=61;
    printf("x dim is %d and y dim is %d \n",v2.x,v2.y);
    sum=sumvector(v1,v2);
    printf("x dim of result is %d and y dim of resukt is %d\n",sum.x,sum.y);
    return 0;
}

3.Twenty integeers are to be stored in memory what will you prefer -Array or structure. 
Ans:- Array 

4.Write a program with a structure representing a complex number.
#include<stdio.h>
struct complex{
    double real; 
    double imag;
};
int main(){
    struct complex c1;
    c1.real=3.0;
    c1.imag=4.0;
    printf("the real number is %.2f and imag number is %.2fi ",c1.real,c1.imag);
    return 0;
}

5.Write a program to illustrate the use of arrow operator -> in c. 
#include<stdio.h>
#include<stdlib.h>
struct student{
    char *name;
    int roll;
    float marks;
};
int main(){
    struct student *ptr;
    ptr=(struct student *)malloc(sizeof(struct student));
    ptr->name="Wasim";
    ptr->roll=60;
    ptr->marks=98;
    printf("The name of the student is %s\n",ptr->name);
    printf("the roll of the student is %d\n",ptr->roll);
    printf("the marks of the student is %f\n",ptr->marks);
    free(ptr);
    return 0;
}

6.Create an array of 5 complex number created in problem 5 and display them with the help of a display function. The value must be taken 
as an input from the user.
#include<stdio.h>
typedef struct complex{
    int real; 
    int imag;
}comp;
void display(comp c){
    printf("the vslue of real part is:- %d\n",c.real);
    printf("the value of imag part is:- %d\n",c.imag);
}
int main(){
    comp cnum[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value for %d num \n",i+1);
        scanf("%d",&cnum[i].real);
        printf("Enter the complex value for %d num \n",i+1);
        scanf("%d",&cnum[i].imag);
    }
    for(int i=0; i<5; i++){
        display(cnum[i]);
    }
    return 0;
}

7.Write program 5 using typedef keyword
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct student {
    char name[20];
    int age;
    float marks;
};
typedef struct student Student;
void print_student(Student *s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age); 
    printf("Marks: %.2f\n", s->marks);
}
int main() {
    Student *s1 = (Student *)malloc(sizeof(Student));
    strcpy(s1->name,"wasim");
    s1->age = 18;
    s1->marks = 85.5;
    print_student(s1);
    free(s1);
    return 0;
}

8.Create a structure representing a bank account of a customer. What Fields did you use and why. 
#include<stdio.h>
#include<string.h>
struct BankAccount{
    char AccountHolderName[20], AccountType[20];
    long long int AccountNumber;
};
int main(){
    struct BankAccount Ba;
    strcpy(Ba.AccountHolderName,"Wasim Akram");
    Ba.AccountNumber=5164226389;
    strcpy(Ba.AccountType,"Saving Account");
    printf("Account Holder name:-%s\n",Ba.AccountHolderName);
    printf("Account Type:-%d\n",Ba.AccountNumber);
    printf("Account type:- %s",Ba.AccountType);
    return 0;
} 

9.Write a structure capable of storing date write a function to compare those data.
#include<stdio.h>
struct date {
  int day;
  int month;
  int year;
};
int compare_dates(struct date d1, struct date d2) {
  if (d1.year > d2.year) {
    return 1;
  }
  else if (d1.year < d2.year) {
    return -1;
  }
  else {
    if (d1.month > d2.month) {
      return 1;
    }
    else if (d1.month < d2.month) {
      return -1;
    }
    else {
      if (d1.day > d2.day) {
        return 1;
      }
      else if (d1.day < d2.day) {
        return -1;
      }
      else {
        return 0;
      }
    }
  }
}
void print_date(struct date d) {
  printf("%d/%d/%d\n", d.day, d.month, d.year);
}
int main() {
  struct date d1 = {20, 1, 2024};
  struct date d2 = {15, 2, 2023};
    print_date(d1);
    print_date(d2);
    int a = compare_dates(d1,d2);
    printf("Dtae comparison functioins returns :- %d",a);
    return 0;
}

10.Solve problem 9 for time using timedef keyword*/ 
#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int hours;
  int minutes;
  int seconds;
} time;
int compare_time(time t1, time t2) {
  int s1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
  int s2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
  return abs(s1 - s2);
}
int main() {
  time t1 = {10, 15, 30};
  time t2 = {12, 45, 50};
  int diff = compare_time(t1, t2);
  printf("The difference between %d:%d:%d and %d:%d:%d is %d seconds.\n", t1.hours, t1.minutes, t1.seconds, t2.hours, t2.minutes, t2.seconds, diff);
  return 0;
}








