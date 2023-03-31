#include<stdio.h>
#include<stdlib.h>
/*
MB-213-A
a8 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main() 
{
  FILE *outin;
  outin = fopen ("chars.txt","r");
 //reading 
  if(outin == NULL)   //reading if output is empty
  {
    printf("Error while opening file! ");
    exit(1);
  }
 
  char nr1;
  char nr2;
  int sum = 0;

 fscanf(outin ,"%c %c", &nr1, &nr2);
 printf("%c %c", nr1, nr2);
 sum +=(int)nr1 +(int)nr2 ;

 fclose(outin);
 // writing program
 outin = fopen("codesum.txt","w");
 fprintf( outin, "%d", sum);
 printf("\noutput file codesum.txt");


}
