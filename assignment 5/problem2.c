#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a5 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


void divby5(float arr[], int size);

int main()
{

   {
     float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36} ;
     //arrays assigned 

     int size = 6;
     int i ;

     printf("Before:\n");
     // creating a for loop to use arrays

        for(i = 0; i < size; i++)
        {
             printf("%.3f ",arr[i]);
        }
        printf("\n");




     printf("After:\n");
     // for loop and divby5 to divide all arrays by 5

        divby5(arr, size);

        for(i = 0; i < size; i++)
        {

           printf("%.3f ",arr[i]);
        }

           printf("\n");

    }
     return 0;


}


void divby5(float arr[], int size) //prototype
{

  for( int i = 0; i < size; i++)

   arr[i] = arr[i] / 5 ;
 //function created to divide arrays by 5

}
