#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a2 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{

int integer;
/*declaring variable*/

scanf("%d",&integer);

if (integer % 2 == 0 && integer % 7 == 0){
/*  statement which will decide if
number is divisible or not */
 printf("The number is divisible by 2 and 7\n");
/* will print this statement if
number is divisible by both numbers */
}
else{
 printf("The number is NOT divisible by 2 and 7\n");
 /* will print this if number
 is not divisible by both numbers */
}
return 0;
}