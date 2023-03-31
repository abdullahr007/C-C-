#include <stdio.h>
#define MIN1(a,b) ((a)<(b)?(a):(b))
#define MIN2(a,b,c) MIN1(MIN1(a,b),c)
#define MAX1(a,b) ((a)>(b)?(a):(b))
#define MAX2(a,b,c) MAX1(MAX1(a,b),c)
/*
MB-213-A
a6 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
float middle_range(float a ,float b ,float c) //prototype
{
    float mid;
    
    mid= ( MIN2(a,b,c) + MAX2(a,b,c) )/2;
    
  return mid;
}
   
float middle_range(float a ,float b ,float c);

int main()
{
   
    float a;
    float b;
    float c;
    float mid;
    //input 
    
    scanf ("%f",&a);
    scanf ("%f",&b);
    scanf ("%f",&c);

    mid =middle_range(a, b, c);
    //calling function
    
    printf("The mid-range is: %f\n",mid);
    
  return 0;
}