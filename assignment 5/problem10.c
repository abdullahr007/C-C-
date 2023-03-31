#include <stdio.h>
/*
MB-213-A
a5 p10.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main()
 {

    int n;

    scanf("%d",&n);
    //input
    func(n);
    //calling  function
    printf("\n");

  return 0;
}

int func (int n)
{
    if (n==0)
      {
         return 0; //exit  function
      }
    else 
      {
         printf("%d ",n);
         
         func(--n); //calling of the function
      }
 
}

