#include<stdio.h>
#include<string.h>
#define MAX_LEN 80

/*
MB-213-A
a4 p12.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
void replaceAll(char str[],char c,char e)

{
   for(int a=0;str[a]!='\0';a++)   
   {
       if(str[a]==c)
       {
           str[a]=e;
       }

   }
}

int main()
{
   char str[MAX_LEN];   //max length of str and input
   char j;
   char k;     
   char new_line;
  //inputs
   while(1)
   {
       printf("Input for string (quit to end): ");
       scanf("%s",str);

       if(strcmp(str,"stop")==0)         // using if to break
       {
         break;
       }

       scanf("%c",&new_line);
       printf("Type character you want to replace= ");           
       //input for character which will be changed

       scanf("%c",&j);
       scanf("%c",&new_line);
       printf(" New character = ");
      // character which will replace
       scanf("%c",&k);
       scanf("%c",&new_line);
       printf("\n");
       printf("Original string: %s\n",str);

       replaceAll(str,j,k);
       printf("Replaced string: %s\n",str);
       printf("\n");
   }

   return 0;
}
