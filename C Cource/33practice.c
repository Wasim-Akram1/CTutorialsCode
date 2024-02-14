/*1. Write a program to find the address of a variable. use this address to get the value of this variable  
#include<stdio.h>
int main(){
    int a=6;
    int *ptr;
    ptr=&a;
    printf("the adrees of variable is %u \n",ptr);
    printf("the value of variable is %d",*ptr);
}

2.Warite a program having a variable i print the address of i. Pass the variable to a function and print its address. Are these address 
  same why?
#include<stdio.h> 
void printadd(int a){
    printf("adress of variable a is:- %u\n",&a);
}
int main(){
    int i=4;
    printf("the address of i is:- %u \n",&i);
    //printadd(i);
    //printf("the address of i is:- %u \n",&i);
    return 0;
}
No the adress are not same because memory will allcate the new adress as it is the copy. 

3.Write a program to change the value of a variable v to ten times of its current value. Write a function and pass the value by reference. 
#include<stdio.h>
void tentime(int *a){
    *a=*a*10;
}
int main(){
    int a=2;
    printf("the curent value of a variable is %d\n",a);
    tentime(&a);
    printf("the value ten time is %u\n",a);
    return 0;
} 

/*4.Write a program using a function which calculate the sum and average of two number. Use pointers and print the value of sum and average
    in main()
#include<stdio.h>
void sumandavg(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
}
int main(){
    int i=3;
    int j=6;
    int sum;
    float avg;
    sumandavg(i,j,&sum,&avg);
    printf("the value of sum is %d \n",sum);
    printf("the value of average is %f \n",avg);
    return 0;
} 

5.Write a program to print the value of a varaible i by using pointer to pointer type of variable 
#include<stdio.h>
int main(){
    int a=245;
    int *ptr;
    int **ptr_ptr;
    ptr= &a;
    ptr_ptr= &ptr;
    printf("the value of i is %d",**ptr_ptr);
    return 0;
}

6.Try problem 3 using call by value and verify that it doesnt change the value of the said variable.*/
#include<stdio.h>
voidtentime(int a);
int main(){
    int a=4;
    printf("The value of a is %d and \n",a);
    printf("the value of a after function call is %d \n",a);
    return 0;
}
void tentime(int a){
    a=a*10;
}
