#include <stdio.h>
/*
MB-213-A
a5 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int smallestp=0; //global variable
int largestp=0;

double largest(double *v,int n)
// function for largest
{
   int i;
   double large=v[0];
   

   largestp=0;
     
     for(i=1; i<n; i++)
      {
        if(v[i]>large)
         {
            large=v[i];
            largestp=i;
         }
      }
   
   return large;
}

double smallest(double *v,int n) 
// function for smallest 
{
   int i;
   double small=v[0];

   smallestp=0;

    for(i=1; i<n; i++)
     {
       if(v[i]<small)
        {
           small=v[i];
           smallestp=i;
        }
     }

   return small;
}

int main()
//main() to print output
{
   int n;
   int i;
   //input 

   scanf("%d",&n);

   double v[n];
   double w[n];
   //input for vectors
   for(i=0; i<n; i++)
    {
       scanf("%lf",&v[i]);
    }

   for(i=0; i<n; i++)
    {
       scanf("%lf",&w[i]);
    }

   double scalar=0.0;

   for(i=0; i<n; i++)
    {
        scalar = scalar + v[i]*w[i];
    }
 //printing outputs
   printf( "Scalar product=%lf\n",scalar);

   printf( "The smallest = %lf\n",smallest(v,n));
   printf( "Position of smallest = %d\n",smallestp);

   printf( "The largest = %lf\n",largest(v,n));
   printf( "Position of largest = %d\n",largestp);

   printf( "The smallest = %lf\n",smallest(w,n));
   printf( "Position of smallest = %d\n",smallestp);

   printf( "The largest = %lf\n",largest(w,n));
   printf( "Position of largest = %d\n",largestp);
   
   return 0;
}
