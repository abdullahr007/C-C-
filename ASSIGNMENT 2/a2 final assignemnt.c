#include <stdio.h>
/*
MB-213-A
a2 p1.[4th.c]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main(){
double double1;
double double2;
    
scanf("%lf", &double1);
   
scanf("%lf", &double2);
printf("sum of doubles=%lf\n",double1 + double2);
printf("difference of doubles=%lf\n",double1 - double2);
printf("square=%lf\n",double1*double1);
int num1;
int num2;
scanf("%d",&num1);
scanf("%d",&num2);
printf("sum of integers=%d\n",num1+num2);
printf("product of integers=%d\n",num1*num2);
char Chars1;
char Chars2;
getchar();
scanf("%c",&Chars1);
getchar();
scanf("%c",&Chars2);
printf("sum of chars=%d\n",Chars1+Chars2);
printf("product of chars=%d\n",Chars1*Chars2);
printf("sum of chars=%c\n",Chars1+Chars2);
printf("product of chars=%c\n",Chars1*Chars2);

return 0;
}