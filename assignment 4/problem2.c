#include <stdio.h>

/*
MB-213-A
a4 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main() {

    int a = 1;
    int b;
    //input
    char str[50];
    scanf("%[^\n]%*c", str);
    // used [^\n] to read string with space


    for( b = 0; str[b]!= '\0'; b++)
    {
       if(str[b] != ' ')
       {
          if(a)
          {
            printf("%c\n",str[b]);
            a = 0;   
          }
          
          else
          {
            printf(" %c\n",str[b]);
            a = 1;
          }
          //for zigzag of words

        }
          else
          {
            printf("\n");
            a = 1; // helps with the space between words
          }

    }
  return 0;
}