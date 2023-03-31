#include <stdio.h> 
#include<stdlib.h> 
/*
MB-213-A
a5 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int n;
//global variable

 float * divby5(float* a)
 {
   int j;

   for(j=0;j<n;j++)
     {
       a[j] = a[j]/5 ;
     }
  return a;
 }

//definition of main()
 int main()
 {
 int i;
 int k;
 int x; //local variables for loop iterartion

 float *data; //pointer to hold values of user input
 printf("Enter the total number of elements : \n");
 scanf("%d",&n);

 data = (float*) calloc (n, sizeof(float));
   //allocating memory

 if(data == NULL)
    {
      printf("Memory not allocated");
    }

  //input
 printf("Enter the numbers : \n");
 for(i=0;i<n;i++)
    {
      scanf("%f",data+i);
    }


 printf("Before : \n");
   for(k=0;k<n;k++)
     {
       printf("%0.3f ",data[k]);
     }

 data = divby5(data);

 printf("\nAfter : \n");
   for(x=0;x<n;x++)
     {
       printf("%0.3f ",data[x]);
     }

 free(data);

 return 0;
}
