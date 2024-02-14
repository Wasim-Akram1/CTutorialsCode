/*1.Which of the following is used to appropriately read a multi word string.
    a.gets() ans
    b.Puts()
    c.printf()
    d.scanf()
    
2.Write a program to take string as an input from the user using %c and %s. confirm that the string are equal
#include<stdio.h>
#include<string.h>
int main(){
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("Enter the value of first string \n");
    scanf("%s",&st1);
    printf("Enter the value of second string character by character \n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("the value of st1 is %s\n",st1);
    printf("the value of st2 is %s\n",st2);
    printf("strcmp for this string returns %d",strcmp(st1,st2));
    return 0;
}

3.Write your own version of strlen function from <string.h>
#include<stdio.h>
int strlen(char *st){
    char *ptr=st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[]="Wasim";
    int l=strlen(st);
    printf("the length of this string is %d",l);
    return 0;
}

4.Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as 
  the start and ending position for slice. 
#include<stdio.h>
void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
} 
int main(){
    char st[]="Wasim";
    slice(st,1,5);
    printf("%s",st);
    return 0;
}

5.write your own version of strcpy function from <string.h>
#include <stdio.h>
void strcpyz(char *dest, char *src) {
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
}
int main() {
  char src[] = "Hello, world!";
  char dest[20];
  strcpyz(dest, src);
  printf("The destination string is: %s\n", dest);
  return 0;
}

6.Write a program to encrypt a string by adding 1 to the ascii value of its character
#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;
    }
}
int main(){
    char c[]="Wasim is good allrounder";
    encrypt(c);
    printf("Encrypted string is: %s",c);
    return 0;
}

7.Write a program to decrypt a string by minusing 1 to the ascii value of its character
#include<stdio.h>
void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}
int main(){
    char c[]="Xbtjn!jt!hppe!bmmspvoefs";
    decrypt(c);
    printf("Decrypted string is: %s",c);
    return 0;
}

8.Write a program to count the occurrence of a given character in a string.
#include<stdio.h>
int occurrence(char st[],char c){
    char *ptr=st;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[]="Wasim";
    int count=occurrence(st,'a');
    printf("occurrence=%d",count);
    return 0;
}

9.Write a program to check weather a given character is present in a string or not.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, len, found = 0;
    printf("Enter a string: "); 
    scanf("%s", str);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            found = 1;
            printf("The character %c is present at index %d\n", ch, i);
        }
    }
    if (found == 0) 
    {
        printf("The character %c is not present in the string\n", ch);
    }
    return 0;
}


