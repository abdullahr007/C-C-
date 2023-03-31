#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a6 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main() 
{
 
 unsigned char ch;
 int ans; 
 int size = 1;
 //bit mask for bitwise operator 
 scanf("%c",&ch); 
 
 int num=ch; 
 
 printf("The decimal representation is: %d\n", num); 
 
  
 if(num>128) //Setting mask size
   size=8;
 
 else if(num>64)
   size=7;
 
 else if(num>32)
   size=6;
 
 else if(num>16)
   size=5;
 
 else if(num>8)
   size=4;
 
 else if(num>4)
   size=3;
 
 else if(num>2)
   size=2;

 printf("The backwards binary representation is: ");
  
 for (int i = 0; i < size; ++i) //loop for bitwise 
     
     {
        ans = ((num&(1 << i))==0)?0:1;
      
        printf("%d",ans); //printing iteration result
     }     

    printf("\n");

  return 0;
}