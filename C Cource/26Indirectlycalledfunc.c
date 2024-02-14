#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    return 0;
} 
void goodmorning(){
    printf("Good Morning Wasim\n ");
    goodafternoon();
}
void goodafternoon(){
    printf("Good Afternoon Wasim\n ");
    goodnight();
}
void goodnight(){
    printf("Good Night Wasim");
}