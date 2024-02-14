/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    printf("the size of int on my pc is %d\n",sizeof(int));
    printf("the size of char on my pc is %d\n",sizeof(char));
    printf("the size of float on my pc is %d\n",sizeof(float));
    ptr=(int *)malloc(4*sizeof(int));
    for(int i=0; i<4; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

#Quick Quiz 
Write a program to create a dynamic array of 5 float using malloc()*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float *)malloc(4*sizeof(float));
    for(int i=0; i<4; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %f\n",i,ptr[i]);
    }
    return 0;
}