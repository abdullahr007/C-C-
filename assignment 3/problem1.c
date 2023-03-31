#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a3 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{
   float x;
   scanf("%f",&x);
   // input for float
   int n,idx;
   scanf("%d",&n);
   // input for integer
   while (n<=0){
   // checking if n is valid or not   
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
        }

    for(idx=0; idx<n ; idx++)
        {
            printf("%f\n",x);
        //print float number n times
        }
        return 0;
}
