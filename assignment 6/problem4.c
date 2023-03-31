#include<stdio.h>
#define INTERMEDIATE 1
/*
MB-213-A
a6 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main()
{
 
 int n;
 int i;
 int v1[10];
 int v2[10];
 int sum=0;
 scanf("%d", &n);
 
 for(i=0; i<n; i++)   
 scanf("%d", &v1[i]);
//loop reads input v1

 for(i=0; i<n; i++)//loop to read input to vector v2
 scanf("%d",&v2[i]);

    if(INTERMEDIATE)
     {
       printf("The intermediate product values are:");
     
         for(int i=0; i<n; i++) 
          {
            printf("\n%d",v1[i]*v2[i]);
            sum += v1[i]*v2[i];
          }
  
     }
    
    else
        
         for(int i=0;i<n;i++) 
             sum += v1[i]*v2[i];
        //compute sum
        
         printf("\nThe scalar product is :%d",sum);
       
  return 0;
}