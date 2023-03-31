#include <stdio.h>
/*
MB-213-A
a5 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
 int n;
 int i;
 scanf("%d",&n); //input of array
 
 float arr[n]; //declare array 
 
  for(i=0;i<n;i++) 
    {
      scanf("%f",&arr[i]);
    }
  
  float *p; 
  
   p=arr; //intialiaze pointer 
   i=0;
  
  while(*p>=0) 
    {
        p++; //increment pointer 
        i++; //increment value 
    }
   printf("Before the first negative value: %d elements",i);
 return 0;
}