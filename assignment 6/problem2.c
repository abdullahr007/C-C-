#include<stdio.h>
#define Bit_and(a,x) (a & x)
/*
MB-213-A
a6 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main()
{

  int power =1;
  int sum =0;
  int i;
  char letter;

  scanf("%c", &letter);
                                          // input
  for(i=1; i<=8; i++)
   {
      sum += Bit_and( letter,power);   // bit to the left side
      power= power<<1;
   }

  printf("The decimal representation is: %d\n",sum);
                                         //least significant bit
  if (Bit_and(letter,1))
    {
       printf("The least significant bit is: 1");
    }
  else
    {
       printf("The least significant bit is: 0");
    }
 
 return 0;
}

