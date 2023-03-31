#include<stdio.h>
#define SWAP(x, y,t) t = x; x = y; y = t; 

/*
MB-213-A
a6 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
  
int main()
{
 
 int a;
 int b;
 
 double x; 
 double y; 
 double t;
 
 scanf("%d", &a);
 scanf("%d", &b); //Enter integer 
 scanf("%lf", &x);
 scanf("%lf", &y); //Enter floating
 
 SWAP(a, b, t); 
  //Swapping using macro
  printf("After swapping:\n");
  printf("%d\n", a);
  printf("%d\n", b);

 SWAP(x,y, t);
  //Swapping  float numbers
  printf("%.6lf\n", x);
  printf("%.6lf\n", y);
 
  return 0;
  
}