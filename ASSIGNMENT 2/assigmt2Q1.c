#include <stdio.h>

int main() { 

double num1;
double num2; 


printf("enter a number");
scanf("%lf", &num1);
printf("enter a number");
scanf("%lf", &num2);
printf("sum of doubles=%lf\n", num1 + num2 ); 
printf("difference of doubles=%lf\n" ,num1 - num2);
printf("square=%lf\n",num1);

int integer1;
int integer2;

printf("enter a number");
scanf("%d", &integer1);
printf("enter a number");
scanf("%d", &integer2);


printf("sum of integers=%d\n", integer1 + integer2);
printf("product of integers=%d\n",integer1 * integer2);






return 0;

}