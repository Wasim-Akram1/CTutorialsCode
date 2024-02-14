/*1. Write a program using fumction to find average of three numbers 
#include<stdio.h>
float average(int a, int b, int c);
int main(){
    float d;
    d=average(5,10,15);
    printf("the average of three number is %f",d);
    return 0;
}
float average(int a, int b, int c){
    float avg;
    avg=(a+b+c)/3;
    return avg;
}

2.Write a function to convert celcius temperature into farenheight. 
#include<stdio.h>
float farenheight(float celcius);
int main(){
    float celcius;
    celcius=farenheight(33.00);
    printf("the coverted temperature is %f farenheight",celcius);
    return 0;
}
float farenheight(float celcius){
    float farenheight;
    farenheight=(celcius*9/5)+32;
    return farenheight;
}

3.Write a program function to calculate force of attraction on a body of mass m exerted by earth (g=9.8m/s^2)
#include<stdio.h>
float force(float mass);
int main(){
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f",&m);
    printf("the vlaue of force in newton is%.2f\n",force(m));
    return 0;
}
float force(float mass){
    float result=mass*9.8;
    return result;
}

4.Write a program using recursion to calculate nth element of fibonachi series 
#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+(n-2);
}
int main(){
    printf("The answer of fibonachi series is:- %d\n",fib(5));
    return 0;
}

5.What will be the following line produce in a c program :
a=3;
printf("%d%d%d\n",a,++a,a++);
Ans:- 5, 5 , 3 because the output will show in reverse order copiler take the order right to left 

6. Write a recursive function to calculate the sum of first n natural number.
#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter the value of n:- ");
    scanf("%d",&n);
    printf("the sum of first n natural number is:- %d",sum(n));
    return 0;
}

7.Write a program using functions to print the following patterns(find n lines)
*
***
*****               
#include<stdio.h>
void printpattern(int n);
int main(){
    int n=3;
    printpattern(n);
    return 0;
}
void printpattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(int i=0; i<(2*n-1); i++){
        printf("*");
    }
    printf("\n");
}

8.Use iterative property snd print the 7th program with for loops */
#include<stdio.h>
int main(){
    int n=3;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

