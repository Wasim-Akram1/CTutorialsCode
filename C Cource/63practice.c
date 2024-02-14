/*Write a programd to read a integer from a file 
#include<stdio.h>
int main(){
    int a,b,c;
    FILE *ptr;
    ptr=fopen("60asample.txt","r");
    fscanf(ptr,"%d %d %d \n",&a, &b, &c);
    printf("the value of a b and c is %d %d and %d\n",a,b,c);
    fclose(ptr);
    return 0;
}

2.Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well 
formatted
#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    printf("Enter the number:-\n");
    scanf("%d",&num);
    ptr=fopen("63atable.txt","w");
    for(int i=0; i<10; i++){
        fprintf(ptr,"%d * %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("your table of %d is successfully generated in 63atable.txt file\n",num);
    return 0;
}

3.Write a program to read a text file character by character and write its content twice in a seprate file. 
#include<stdio.h>
int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("63atable.txt","r");
    ptr2=fopen("60asample.txt","r");
    int c=fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}

4.Take Name and salary of two employees as input from the user and write them to a text file in the following format:
name1, 3300
name2, 7700
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name1[20], name2[20];
    int salary1, salary2;
    printf("Enter the name and salary of the first employee: ");
    scanf("%s %d", name1, &salary1);
    printf("Enter the name and salary of the second employee: ");
    scanf("%s %d", name2, &salary2);
    FILE *fp = fopen("employees.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Cannot open the file.\n");
        exit(1);
    }
    fprintf(fp, "%s, %d\n", name1, salary1);
    fprintf(fp, "%s, %d\n", name2, salary2);
    fclose(fp);
    printf("The names and salaries of the two employees have been written to the file.\n");
    return 0;
}

5.Write a program to modify a file containning an integer to double its value. 
2                  --------         4
previous file                       next file*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("employee.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    int num;
    fscanf(fp, "%d", &num);
    num = num * 2;
    rewind(fp);
    fprintf(fp, "%d", num);
    fclose(fp);
    return 0;
}


