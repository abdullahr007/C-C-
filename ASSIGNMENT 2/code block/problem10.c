#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a2 p10.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{

int n, idx ;
printf("enter an integer=");
scanf("%d",n);
/*user input*/

while(n<=0){
/*while loop for invalid user input*/
printf("Enter integer greater than '0'=");
scanf("%d",&n);
}
for (idx=1; idx <= n ; idx ++);{{
/* using for loop so we can print hours*/
if (n=1)
printf("%d day = %d hours\n",idx*24);}
if (n<=1){
printf("%d days = %d hours\n",idx*24);
}}

return 0;
}