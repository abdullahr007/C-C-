#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a2 p6.[1st.c]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
double X,Y ;  /*input by user*/
printf("enter a value for variable X =");
scanf("%lf",&X);
printf("enter a value for variable Y =");
scanf("%lf",&Y);
/*input*/
double *ptr_one,*ptr_two,*ptr_three;
/* initialise pointers*/
ptr_one = &X;
/*ptr_one assigned to address of X*/
ptr_two = &X;
/*ptr_two assigned to address of X*/
ptr_three = &Y;
/*ptr_three assigned to address of Y*/
printf("address of ptr_one=%p\n",ptr_one);
printf("address of ptr_two=%p\n",ptr_two);
printf("address of ptr_three=%p\n",ptr_three);
/* print address */
return 0;
}