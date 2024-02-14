/*1.Warite a program to print multiplication table of a given number n
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }
    return 0;
}

2.write a program to print multiplication table of 10 in reversed order. 
#include<stdio.h>
int main(){
    int i;
    for(i=10; i; i--){
        printf("10*%d=%d \n",i,10*i);
    }
    return 0;
}

3.A do while loop is executed 
at least once Answer 
at least twice 
at most once

4.What can be done using one type of loops can also be done using the other two types of loops- True or false 
ans:- True 

5. Write a program to sum first ten natural numbers using while loops. 
#include<stdio.h>
int main(){
    int i=1, sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

6.Write a program to implement program 5 using for and do while loop.
#include<stdio.h>
int main(){
    int i=1,sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=10);
    printf("%d",sum);
    return 0;
}

7.Write a program to calculate the sum of the number occuring in the multiplication table of 8(consiider 8*1 to 8*10)
#include<stdio.h>
int main(){
    int i, sum=0;
    for(i=1; i<=10; i++){
        sum+=8*i;
    }
        printf("the sum of the multiplication table of 8 is %d\n ",sum);
    return 0;
}

8.Write a program to calculate the factorial of a given number using a for loop 
#include<stdio.h>
int main(){
    int i=1, n=7, fact=1;
    for(i;i<=n;i++){
        fact*=i;
    }
    printf("the factorial of number is %d is %d",n,fact);
    return 0;
}

9.Repeat 8 using while loop
#include<stdio.h>
int main(){
    int i=1, n=7, fact=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}

10.Write a program to check weather a given number is prime or not usign loops .
#include<stdio.h>
int main(){
    int n=45, prime=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("this is a prime number");
    }
    else{
        printf("this is not a prime number ");
    }
    return 0;
}

11.Write a implement 10 using other type of loops*/
#include <stdio.h>
#include <math.h>
int main(){
    int num=15, isPrime = 1, i = 2;
    while (i <= sqrt(num)){
        if (num % i == 0){
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime == 1){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}









