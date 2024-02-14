/*1. Create an array of 10 numbers verify using pointer arithmatic that (ptr+2) points to the third element where ptr is a pointer pointing to
 first element of the array.  
#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=&arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("Pointing to the same address\n");
    }
    else{
        printf("Not pointing to the same address \n");
    }
    return 0;
}

2.If S[3] is a 1D Array of integers then *(s+3) refers to the third element:
a.True 
b.False (answer) because it will refer to 4th element 
c.Deoends

3.Write a program to create an array of 10 integer and store multiplication table of 5 in it.
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i]=5*(i+1);
    }
    for(int i=0; i<10;i++){
        printf("5 * %d= %d \n",i+1,arr[i]);
    }
    return 0;
}

4.Repeat problem 3 for a general input provided by the user using scanf. 
#include<stdio.h>
int main(){
    int n;
    int arr[10];
    printf("Enter the number you want to make multiplication table \n");
    scanf("%d",&n);
    for(int i=0; i<10; i++){
        arr[i]=n*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("%d * %d = %d \n",n,i+1,arr[i]);
    }
    return 0;
}

5. Write a program containning a function which reverse the array passed to it 
#include<stdio.h>
void reverse(int*arr, int n){
    int temp;
    for(int i=0; i<(n/2); i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0; i<7; i++){
        printf("the value of %d element is: %d \n",i,arr[i]);
    }
    return 0;
}

6.Write a program containning functions which counts the number of positive integers in an array
#include <stdio.h>
int count_positive(int* arr, int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) { 
      count++;
    }
  }
  return count;
}
int main() {
  int arr[] = {1, -2, 3, 4, -5, 6, 0, -7}; 
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = count_positive(arr, size);
  printf("The number of positive integers in the array is %d\n", result);
  return 0;
}

7.Create an array of size 3*10 containning multiplication table of the number 2,7 and 9 respectively. 
#include<stdio.h>
void pmultable(int *multable, int num, int n){
    printf("the multiplication table of %d is \n", num);
    for(int i=0; i<n; i++){
        multable[i]=num*(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%d * %d = %d\n", num, i+1, multable[i]);
    }
    printf("****************************************\n");
}
int main(){
    int multable[3][10];
    pmultable(multable[0],2,10);
    pmultable(multable[1],7,10);
    pmultable(multable[2],9,10);
    return 0;
}

8.Repeat problem 7 with custom input 
#include<stdio.h>
void pmultable(int *multable, int num, int n){
    printf("the multiplication table of %d is \n", num);
    for(int i=0; i<n; i++){
        multable[i]=num*(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%d * %d = %d\n", num, i+1, multable[i]);
    }
    printf("****************************************\n");
}
int main(){
    int multable[3][10];
    int n;
    int m;
    int j;
    printf("Give the number to get multiplication table:- \n");
    scanf("%d %d %d",&n,&m,&j);
    pmultable(multable[0],n,10);
    pmultable(multable[1],m,10);
    pmultable(multable[2],j,10);
    return 0;
}

9.Create three dimensional array and print the address of its elements in increasing order. */
#include<stdio.h>
int main(){
    int arr[2][3][4];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                printf("the address of arr [%d %d %d] is %u\n",i,j,k,&arr[i][j][k]);
            }
        }
    }
    return 0;
}
