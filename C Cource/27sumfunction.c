/*#include<stdio.h>
int sum(int a, int b);
int main(){
    int c;
    c=sum(2,15);
    printf("the vlaue of c is %d\n",c);
    return 0;
}
int sum(int a, int b){
    int result;
    result=a+b;
    return result;
}

Quick Quiz 
Use the library fumction to calculate the area of a square with side a.*/
#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("The area of a square is %f",pow(side, 2));
    return 0;
}