#include <stdio.h>
#include <stdlib.h>

int main () {

float A;
float B;
float H;
printf("enter value for A:");
scanf("%1f\n",&A);

printf("enter value for B:");
scanf("%f\n",&B);

printf("enter value for H:");
scanf("%f\n",&H);

float multiply = A * A ;
printf("square area=%f\n",multiply);

float multiply2 = A * B ;
printf("rectange area=%f\n",multiply2);

float multiply3 = (H * A )/2 ;
printf("triangle area=%f\n",multiply3);



return 0;
}
