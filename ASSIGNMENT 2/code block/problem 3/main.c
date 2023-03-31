#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a2 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
int weeks,days,hours,total;

printf("enter value for weeks:\n");
scanf("%d", &weeks);
/* user input for weeks*/

printf("enter value for days:\n");
scanf("%d", &days);
/* user input for days*/

printf("enter value for hours:\n");
scanf("%d", &hours);
/* user input for hours*/


total=((weeks * 7 * 24)+(days * 24)+(hours));
/* values converted to hours and added*/
printf("total hours= %d\n",total);
/*output of total hours*/



return 0;
}
