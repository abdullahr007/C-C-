#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main(int argc, char const *argv[])

   {
       char ch;
        //variable for character
       int n;
        // variable for integer

         scanf("%c",&ch);
            //input by user for character
         scanf("%d",&n);
            //input by user for integer

       for (int i = 0; i<n; i++)
        {
          printf("%c\n", ch-i);
        }
       return 0;

   }
