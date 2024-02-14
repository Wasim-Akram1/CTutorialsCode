/*1. Find the output of a program 
        int a=10
        if(a=11)
        print("i am 11")
        else
        print("I am not 11")
Answer:- I am 11 (because a==10 is not given a=10 is given )

2.Write a program to find weather a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass Assume 3 subjects and take marks as an input from the user 
#include<stdio.h>
#include<math.h>
int main(){
        int Social, Science, Computer;
        float total;
        printf("Enter the number of Social:-\n ");
        scanf("%d",&Social);
        printf("Enter the number of Science:-\n ");
        scanf("%d",&Science);
        printf("Enter the number of computer:-\n ");
        scanf("%d",&Computer);
        total=(Social + Science + Computer)/3;
        if((total<40)||(Social<33)||(Computer<33)){
                printf("Your total percentage is %f and you are fail",total);
        } 
        else{
                printf("your total percentage is %f and you are pass",total);
        }
        return 0;
}

3.Calculate income tax paid by an employee to the government as per the slabes mentioned below:-
        Income Slab                     Slab 
        2.5L-5.0L                        5%
        5.0L-10.0L                       20%
        Above 10L                        30%
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
#include<stdio.h>
int main(){
        float tax =0, income;
        printf("Enter the income of a employee:-\n");
        scanf("%f",&income);
        if(income>=250000 && income<=500000){
        tax=tax+0.05*(income-250000);
        }
        if(income>=500000 && income<=100000){
                tax=tax+0.20*(income-500000);
        }
        if(income>100000){
                tax=tax+0.30*(income-100000);
        }
        printf("Your net income tax is %f \n",tax);
        return 0;
}

4.Write a program to find weather a year is entered by the user is leap year or not.Take year as an input from the user.
#include<stdio.h>
int main(){
        int year;
        printf("Enter the year:- ");
        scanf("%d",&year);
        if(year%400==0){
                printf("Leap year");
        }
        else if(year%4==0 && year%100!=0){
                printf("leap year");
        }
        else{
                printf("not leap year");
        }
        return 0;
}

5.Write a program to determine weather a character entered by the user is lowercase or not. 
#include<stdio.h>
int main(){
        char character;
        printf("Enter the character:-\n ");
        scanf("%c",&character);
        if(character>=122 && character<=97){
                printf("Upper Case");
        }
        else{
                printf("lower case:");
        }
        return 0;
}

6.Write a program to find greatest of four number entered by the user */
#include<stdio.h>
int main(){
        int a, b, c, d;
        printf("Enter the value of a:- \n");
        scanf("%d",&a);
        printf("Enter the value of b:- \n");
        scanf("%d",&b);
        printf("Enter the value of c:- \n");
        scanf("%d",&c);
        printf("Enter the value of d:- \n");
        scanf("%d",&d);
        if(a>b && a>c && a>d){
                printf("a is greater");
        }
        else if(b>a && b>c && b>d){
                printf("b is greater");
        }
        else if(c>a && c>b && c>d){
                printf("c is greater");
        }
        else{
                printf("d is greater");
        }
        return 0;
}




