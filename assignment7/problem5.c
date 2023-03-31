#include<stdlib.h>
#include <stdio.h>
/*
MB-213-A
a7 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int cmp(const void *x, const void *y)
{ //function to compare
  int a = *(int *)x;
  int b = *(int *)y;
  return a < b ? -1 : a > b ? +1 : 0;
}

int cmp(const void *x, const void *y);

int main()
 {
    int *a;
    int n;
    int i;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    char c;

  while(1)
  {
    scanf("%c",&c);//read characters
    qsort(a,n,sizeof(int),cmp);

    if(c =='a') // a means ascending order
    {
      for(i=0 ;i<n; i++)
      {
        printf("%d ", a[i]);
      }
     printf("\n");
    }
   else if(c =='d')
    {//d means descending order
     for(i=n-1 ;i>=0; i--)
     {
       printf("%d ", a[i]);
     }
    printf("\n");
  }
   else if(c=='e')
    break;//terminating loop 
  }
  return 0;
}
