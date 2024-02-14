/*1.Write a program to dynamically create an array of size 6 capable of storing 6 integers 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int));
   for(int i=0; i<6; i++){
        ptr[i]=0;
    }
    for(int i=0; i<6; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

2.Use array in problem 1 to store 6 integers entered by the user.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the no of element:-\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

3.Solve problem 1 using calloc().
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(6,sizeof(int));
   for(int i=0; i<6; i++){
        ptr[i]=0;
    }
    for(int i=0; i<6; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

4.Create an array Dynamically capable of storing 5 integers.Now use realloc so that it can now store 10 integer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(4*sizeof(int));
    for(int i=0; i<4; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0; i<10; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<10; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}

5.Create an array of multiplication table of 7 upto 10 (7*10=70).use realloc to make it store 15 numbers (from 7*1 to 7*15)
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(10*sizeof(int));
    for(int i=0; i<10; i++){
        ptr[i]=7*(i+1);
        printf("the value of 7 * %d = %d\n",i+1,ptr[i]);
    }
    printf("\n The memory after reallocation is \n");
    ptr=realloc(ptr,15*sizeof(int));
    for(int i=0; i<15; i++){
        ptr[i]=7*(i+1);
        printf("the value of 7 * %d = %d\n",i+1,ptr[i]);
    }
    return 0;
}

6.Attempt problem 4 using calloc() */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(4,sizeof(int));
    for(int i=0; i<4; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<4; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0; i<10; i++){
        printf("Enter the value of %d element:-\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<10; i++){
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}



