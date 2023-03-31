#include <stdio.h>
#include<stdlib.h>
/*
MB-213-A
a5 p11.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int prime(int j,int k);


int prime(int j, int k) //variable k starting from 2
{
    if (j == 1)  
      {
        return 0;
      }

    if  (k*k <= j && j % k == 0) 
      {
        return 0;
      }

    if  (k*k > j)
      {
        return 1;
      }
    return prime(j,k+1);
}

int main()
{
    int j; //making variable
    
    scanf("%d", &j); //scan for input

    if (prime(j, 2) == 0) //outputs
      {
        printf("%d is not prime\n", j);
      }
    else
      { 
        printf("%d is prime\n", j);   
      }

    return 0;
}
