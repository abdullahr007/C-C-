#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a2 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
int a ;
printf("enter a value="); /* input from user*/
scanf("%d",&a);
printf("Your entered value=%d\n",a); 
/* prints users value on screen*/
int *ptr_a;
/*initialise pointer*/
ptr_a = &a;
/*assigned pointer to address of a*/
printf ("Address of pointer= %p\n",ptr_a);
/* print address */
*ptr_a = *ptr_a + 5;
/* increasing value by adding 5*/
printf("New value of a=%d\n",*ptr_a);
printf ("New Address= %p\n",ptr_a) ;
/* print new address*/
 return 0 ;
}
