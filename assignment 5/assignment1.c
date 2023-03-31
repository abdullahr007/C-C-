#include<stdio.h>

void print(int n, char ch);
int main()
{
 int n; //variable selected
 char ch;

scanf("%d",&n);
scanf("%c",&ch);

getchar();

print form(n,ch);
// calling function to print

return 0;
}

void print(int n, char ch)

{
  int N = n;
   for (int i = 0; i<n ; i++)

    {
     N= n - i;

       while(N != 0) //using while loop

       {
          printf("%c",ch);
           N--;
       }

     printf("\n");
    }


}