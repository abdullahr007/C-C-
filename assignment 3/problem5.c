#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

double convert ( double celcius);
// prototype statement

int main(int argc, char const *argv[])
{
    char c;
    int n;
    double celcius[100];
    /* as told to assume we won't get
    value larger than 100 */

       scanf("%c",&c);
       scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
       scanf("%lf",&celcius[i]);
    }
    switch(c)   //so we can test multiple cases
    {
    case 's':
        {
            double sum = 0.0;
            for (int i=0;i<n;i++)
            {
                 sum+=celcius[i];
            }
            printf("%lf",sum);
        }


    case 'p': //list of temp
        {
            for(int i=0;i<n;i++)
            {
                printf("%lf\n",celcius[i]);
            }
        }
    case 't':  //celcius to fahrenheit
        {
            for(int i=0;i<n;i++)
            {
                printf("%lf\n", convert(celcius[i]));
            }

        }

    default: // mean of input
        {
            double sum = 0.0;
            for (int i=0;i<n;i++)
            {
                sum+=celcius[i];
            }
            double average = sum/n;
            printf("%lf",average);
        }
    }

         return 0;
}

 double convert ( double celcius)
    {
        return((9/5.0)*celcius+32);
    }
