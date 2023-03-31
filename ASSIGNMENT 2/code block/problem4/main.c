#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a2 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{

float A , B , H;

scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&H);
printf("square area=%f\n",A*A);
/*Area of square will be calculated*/
printf("rectangle area=%f\n",A*B);
/*Area of rectangle will be calculated*/
printf("triangle area=%f\n",(H*A)*0.5);
/*Area of triangle will be calculated*/
printf("trapezoid area=%f\n",((A+B)/2)*H);
/*Area of trapezoid will be calculated*/


return 0;
}




