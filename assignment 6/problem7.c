#include<stdio.h>
/*
MB-213-A
a6 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


void set3bits(unsigned char ch, int x,int y,int z)
                                   //prototype
{
 int i=7;
 unsigned int decimal = (unsigned int)ch;

 printf("The decimal representation is: %u\n", ch);
 printf("The binary representation is: ");
 
 for(;i>=0;i--) // checking the bit
  {
    if(decimal&(1<<i))
     {
       printf("%d",1);
     }
    else
     {
       printf("%d",0);
     }

   //if i = a,b,c then set the ith bit
   if(i == x ||i==y ||i==z)
    {
      decimal |= (1<<i);
    }
  }

    printf("\nAfter setting the bits: ");
    for(i=7; i>=0; i--)
    {
       if(decimal& (1<<i))
        {
           printf("%d",1);
        }  
     else
     {
        printf("%d",0);
     }
    }
    printf("\n");
}
 
 
void set3bits(unsigned char ch, int x,int y,int z);
int main()
{
 unsigned char ch;
 int x;
 int y;
 int z;

  scanf("%c",&ch);
  //printing bits position
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  set3bits(ch, x,y,z);
 return 0;
}