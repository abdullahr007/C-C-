#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
MB-213-A
a5 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main()
{
 char S1[100];
 char S2[100];
 char *string;
 
 int A= 0;
 
 scanf("%s", S1);
 scanf("%s", S2);
 //read strings
 
 A = strlen(S1) + strlen(S2);
 // length of strings
 string = (char*) malloc(A*sizeof(char));
 //allocate memory
 
 strcpy(string, S1);
 strcat(string, S2);
 
 printf("Result of concatenation: %s\n", string);
 //print 

 return 0;
}
