
#include <stdio.h>
/* # before include wasn't written */

/*
MB-213-A
a1 p3.[2nd.c]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5; /* as this value was decical it should be float not int */
result = a / b;
printf("The result is %f\n", result);
/*  %d changed to %f as result was a floating number */
return 0;
}