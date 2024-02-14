#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("58asampleh.txt", "r");
    if (ptr == NULL)
    {
        printf("THis file doesnt exit!");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("The value of num is:-%d\n", num);
        printf("the value of num1 is: %d\n", num2);
    }
    return 0;
}

/*Quick Quiz
Modify the program above to check weather the file exists or not before opening the file. */