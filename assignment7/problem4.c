#include <stdio.h>
#include<ctype.h>
/*
MB-213-A
a7 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
 void printuppercase(char *s)

 {
    // counter for the loop
    int i = 0;
    char chr;
    while (s[i])
    {
    chr = s[i];
     printf("%c",toupper(chr));
    i++;
    }
 printf("\n");
}

 void printLowercase(char s[])

{
  // function to change to lowercase
   int i = 0;
   char chr;
    while (s[i])
    {
    chr = s[i];
   printf("%c",tolower(chr)); //lowercase command

    i++;
    }   printf("\n");
}

void changeCase(char s[])

{
  int j;  //changing upper to lower and vice versa
  for (j = 0; s[j]!='\0'; j++)
   {
   char c=s[j];

   if (c >= 'a' && c <= 'z'){
      c = c - 32 ;
   }
   else if   (c >= 'A' && c <= 'Z'){
       c= c +  32 ;
   }
  printf("%c",c);
  }
 printf("\n");

}
void printuppercase(char *s);
void printLowercase(char s[]);
void changeCase(char s[]);
int main(void)
{
     char str[100];     
     int one_chr;
     void (*ptr_arr[])(char*) = {printuppercase, printLowercase, changeCase};

     scanf("%[^\n]%*c", str);
     scanf("%d",&one_chr);
    // input 
     while(one_chr!=4)
     {
     (*ptr_arr[one_chr-1])(str);
      scanf("%d",&one_chr);
     } //loop to add different commands
   return 0;
}