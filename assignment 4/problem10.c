#include <stdio.h> 
#include<math.h> 
/*
MB-213-A
a4 p10.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb) //prototype

{
 
  *prod= a * b;  //pointer variables in main function
  *div= a / b;
  *pwr= pow( a, b );
  *invb= 1/b;

}

int main()

{

  float a;         //assigning values to float
    scanf("%f", &a);
  
  float b;
    scanf("%f", &b);
  
  // passing address to the pointer 
  float prod;               
  float div;
  float pwr;
  float invb;
  
  proddivpowinv(a,b,&prod,&div,&pwr,&invb);
  //pointing address by calling functions
 
   
  printf(" The product: %f\n", prod);
    //product of a and b
  printf(" The division: %f\n", div);
   //division of a and b
  printf(" The power b: %f\n", pwr); 
   //power of a^b
  printf(" The inverse of b: %f\n", invb);
   //inverse of b
 
  return 0;


}