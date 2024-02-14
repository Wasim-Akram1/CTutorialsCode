/*#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float *)calloc(4,sizeof(float));
    for(int i=0; i<4; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %f\n",i,ptr[i]);
    }
    return 0;
}

#Quick Quiz 
Write a program to create an array of size n using calloc where n is n integer entered by the user. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the no of element:-\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0; i<n; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

Write a program to demonstrate the usages of free() with malloc()*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    float *ptr2;
    ptr=(float *)malloc(6000*sizeof(float));
    for(int i=0; i<6000; i++){
        ptr=(float *)malloc(60000*sizeof(float));
        printf("Enter the value of %d element:-\n",i);
        scanf("%f",&ptr[i]);
        free(ptr);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %f\n",i,ptr[i]);
    }
    return 0;
}

