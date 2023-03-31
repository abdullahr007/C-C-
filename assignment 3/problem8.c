#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

float average(float x[],int size);

float sum(float x[],int size);

int main(int argc, char const *argv[])

{
    float input;
    float x[10];
    int size = 0;
   //creating variables

    for (int i=0;i<10;i++)  // list of values
    {
        scanf("%f", &input);
        if(input==-99.0)
            // if value is -99.0 breaking the loop
        {
            break;
        }
        else
        {
            x[i]=input;
            size += 1;
        }

    }
     printf("%f\n",sum(x,size));
     printf("%f\n",average(x, size));

     return 0;
}

float sum(float x[],int size)    //average and sum function
 {
     float sum=0.0;
     for(int i=0;i<size;i++)
     {
         sum+=x[i];
     }
  return sum;
 }
 float average(float x[], int size)
 {
     return(sum(x, size)/size);
 }
