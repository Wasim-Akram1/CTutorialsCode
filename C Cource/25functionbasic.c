/*#include<stdio.h>
void display();
int main(){
    int a; 
    printf("Initialising disply fumction \n");
    display();
    printf("Display function finished its work\n");
    return 0;
}
void display(){
    printf("this is display\n");
}

QUICK QUIZ
Write a program with three functions 
1.Good morning function which prints good morning wasim 
2.Good Afternoon Function which prints good afternoon wasim 
3.Good night fumctions which prints good night wasim
main() should call all of these in order 1-2-3*/

#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
} 
void goodmorning(){
    printf("Good Morning Wasim\n ");
}
void goodafternoon(){
    printf("Good Afternoon Wasim\n ");
}
void goodnight(){
    printf("Good Night Wasim");
}