#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a1 p2.[1st.c]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
double X,Y ;  
printf("enter a value for variable X");
scanf("%lf\n",&X);
printf("enter a value for variable Y");
scanf("%lf\n",&Y);
double *prt_one,*ptr_two,*ptr_three;

ptr_one = &X;

ptr_two =&X;

ptr_three=&Y;