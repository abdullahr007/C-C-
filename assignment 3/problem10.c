#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p10.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

float product(float a,float b);

void modifybyref (float *a,float *b);

void productbyref(float a,float b,float *p);


int main(int argc,char const *argv[])
{
    float a,b,p;

    scanf("%f",&a);
    scanf("%f",&b);

    printf("product= %f\n",product(a,b));
    productbyref(a,b,&p);
    modifybyref(&a,&b);

    printf("productbyref=%f\n",p);
    printf("modifybyref=%f,%f\n",a,b);

    return 0;
}
float product(float a , float b)
{
    return(a*b);
}
void productbyref(float a,float b ,float *p)
{
    *p=a*b;
}
void modifybyref(float *a, float *b)
{
    *a+=3; // 3 added to a and 11 to b
    *b+=11;
}
