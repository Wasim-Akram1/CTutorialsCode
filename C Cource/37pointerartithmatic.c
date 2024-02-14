/*#include<stdio.h>
int main(){
    int i=34;
    int *ptr=&i;
    printf("the value of ptr is %u \n",ptr);
   // ptr=ptr-1;
   //ptr=ptr+2;
   //ptr++;
    ptr--;
    printf("the value of ptr is %u",ptr);

    char i='wasim';
    char *ptr=&i;
    printf("the value of ptr is %u \n",ptr);
   // ptr=ptr-1;
   //ptr=ptr+2;
   //ptr++;
    ptr--;
    printf("the value of ptr is %u",ptr);

    float i=34;
    float *ptr=&i;
    printf("the value of ptr is %u \n",ptr);
   // ptr=ptr-1;
   //ptr=ptr+2;
   //ptr++;
    ptr--;
    printf("the value of ptr is %u",ptr);
    return 0;
}

#QUICK QUIZ 
1.Try these operators on another variable by creating pointers in a seprate program. Demonstrate all the four operators. 
Addition of a number to a pointer */
#include<stdio.h>
int main(){

    //Subtraction of one pointer from another
    //int arr[]={1,2,3,4,5,6};
    //int*p=&arr[3];
    //int*q=&arr[7];
    //int dif=p-q;
    //printf("the diiffrence is %d\n",dif);

    //int num=10;
    //int *ptr=&num;
    //int sum=5;
    //int sub=5;
    //printf("the value of num is:- %d \n",num);
    //printf("the address of num is %u \n",ptr);
    //ptr=ptr+sum;

   // Subtraction of a number from a pointer
   //ptr=ptr-sub;

    //Subtraction of one pointer from another 
    //printf("the new address of ptr is:- %u",ptr);

    //Comparison of two pointer 

        int a=10, b=15;
        int *ptr1=&a;
        int *ptr2=&b;
        printf("the address of a is %u \n",ptr1);
        printf("the address of b is %u \n",ptr2);
        if(ptr1==ptr2){
            printf("Both are equal \n");
        }
        else if(ptr1>ptr2){
            printf("ptr1 is greater ");
        }
        else{
            printf("ptr2 is greater");
        }
    return 0;
}