#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p9.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

double sum25(double v[], int n); // prototype function

int main(int argc, char const *argv[])
{
     int n;
     double v [20];
      // variables

     scanf("%d",&n);    //input
     if(n>20)
     {
         n=20;
     }
     for(int i=0;i<n;i++)
     {
         scanf("%lf",&v[i]);
     }

     if(sum25(v,n)==-111)
     {
         printf("One or both positions are invalid\n");

     }
     else
     {
         printf("sum=%lf\n",sum25(v,n));
     }
    return 0;
}

double sum25(double v[],int n)
{
    if (n<6)
        // incase -111 not exists return to 5 position
    {
        return(-111);
    }
return v[2]+v[5];
}
