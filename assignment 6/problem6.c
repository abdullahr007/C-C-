#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a6 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
     unsigned char x;
     int i;
      
    scanf("%c",&x); 
    //print decimal representation
    printf("The decimal representation is: %d\n",x);
    printf("The binary representation is: ");
        //use bit mask 
    for (i=7;i>=0;i--) 
        {
           printf("%u",(x>>i)&1);
        }
        
    printf("\n");
  return 0 ;
}