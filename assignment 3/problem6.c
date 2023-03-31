#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

float to_pounds(int kg, int g); //statement

int main(int argc, char const *argv[])
{
     int kg;
     int g;
     // created variables

     scanf("%d",&kg);
     scanf("%d",&g);
     // scanning inputs

     printf("Result of conversion: %f\n",to_pounds(kg,g));


     return 0;

}
 float to_pounds(int kg, int g)
  {
       return (((g/1000.0)+kg)*2.2);
       //used conversation formula
  }

