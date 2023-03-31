#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a3 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


 float convert(int length_cm) ; // prototype statement

 int main(int argc, char const *argv[])
     {
       int length_cm;
       // variable created

       scanf("%d",&length_cm);
       printf("Result of conversion: %f\n",convert(length_cm));
       // print the answer on screen


       return 0;
    }

  float convert(int length_cm)

    {
       return (length_cm/100000.0) ;
       // converting cm to km

    }
