#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
MB-213-A
a4 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main () {

     float start;    //variables created
     float limit;
     float ratio;

     scanf("%f",&start);    //inputs
     scanf("%f",&limit);
     scanf("%f",&ratio);

     for (float i = start; i<= limit; i += ratio)

     {
         printf("%f ", i);          // outputs

         printf("%f ", i*i*M_PI);

         printf("%f\n", 2*M_PI*i);
     }


   return 0;

}

