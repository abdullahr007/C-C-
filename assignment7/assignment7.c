#include <stdio.h>

#include<ctype.h>

void printUppercase(char *s)

{

int j = 0;

char ch;

while (s[j]) {

ch = s[j];

putchar(toupper(ch));

j++;

}

printf("\n");

}

void printLowercase(char s[])

{

int j = 0;

char ch;

while (s[j]) {

ch = s[j];

putchar(tolower(ch));

j++;

}

printf("\n");

}

void changeCase(char s[])

{

int i;

char c=' ';

for (i = 0; s[i]!='\0'; i++)

{

c=s[i];

c = (c >= 'a' && c <= 'z') ? c = c - 32 : (c >= 'A' && c <= 'Z')? c=c+32: c;

printf("%c",c);

}

printf("\n");

}

int main(void) {

char str[100];

int choice;

void (*fun_ptr_arr[])(char*) = {printUppercase, printLowercase, changeCase};

scanf("%[^\n]%*c", str);

scanf("%d",&choice);

while(choice!=4)

{

(*fun_ptr_arr[choice-1])(str);

scanf("%d",&choice);

}

return 0;

}