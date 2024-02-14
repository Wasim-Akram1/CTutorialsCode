/*#include<stdio.h>
int main(){
    int n_student=3;
    int n_subject=5;
    int marks[3][5];
    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            printf("Enter the marks of student %d in subject %d \n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0; i<n_student; i++){
        for(int j=0; j<n_subject; j++){
            printf("the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}

QUICK QUIZ 
Create a 2d array by taking input from the user write a display function to print the content of this 2d array on the screen.*/
#include <stdio.h>
int display(int students, int subjects, int marks[students][subjects])
{
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("[%d]", marks[i][j]);
        }
        if(i<2){
            printf("\n");
        }
    }
}

int main()
{
    int m = 2;
    int n = 3;
    int marks[2][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(m, n, marks);
    return 0;
}

