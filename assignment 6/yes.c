#include<stdio.h>
  
#define SWAP(x,y,t) { t z; z = x; x = y; y=z; }

int main()
{
 int a;
 int b;
 
 double x; 
 double y; 
 
 
 scanf("%d", &a);
 scanf("%d", &b); //Enter integer 
 scanf("%lf", &x);
 scanf("%lf", &y); //Enter floating
 
 SWAP(a, b, int); 
  //Swapping using macro
  printf("After swapping:\n");
  printf("%d\n", a);
  printf("%d\n", b);

 SWAP(x, y, double);
  //Swapping  float numbers
  printf("%.6lf\n", x);
  printf("%.6lf\n", y);
 
  return 0;
  
}