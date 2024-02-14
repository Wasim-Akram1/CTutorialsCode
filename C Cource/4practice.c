//1.Write a Program to find the area of a rectangle 
//a. Hard coded input
/*#include<stdio.h>
int main(){
    int length=5, breadth=8;
    int area=length*breadth;
    printf("The area of the rectangle is %d \n",area);
    return 0;
}

//b. with user input 
#include<stdio.h>
int main(){
    int length, breadth;
    printf("Enter the length of the rectangle \n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle \n");
    scanf("%d", &breadth);
    printf("Area of the rectangle is:- %d \n", length*breadth);
    return 0;
}

//2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height 
#include<stdio.h>
int main(){
    int radius=4;
    float pie=3.14;
    printf("The area of the circle is %f \n",pie*radius*radius);
    int height=5;
    printf("Volume of the cylinder is %f \n", pie*radius*radius*height);
    return 0;
}

//3. Write a program to convert celcius (centigrade degree temperature to farenheight)
#include<stdio.h>
int main(){
    int celcius= 17;
    float farenheight=(celcius*1.8)+32;
    printf("The temperature in Farenheight is:- %f",farenheight);
    return 0;
}*/

//4. Write a program to calculate simple intrest for a set xof values representing principal, number of years and rate of intreast
#include<stdio.h>
int main(){
    float rate=4500, principal=10, year=4;
    float SimpleIntrest= (rate*principal*year)/100;
    printf("Simple intrest is:- %f",SimpleIntrest);
    return 0;
}