#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a3 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

void print_form(int n, int m, char c);

int main(int argc, char const *argv[])

{
     int n;
     int m;
     char c;
     //variables created
     scanf("%d",&n);
     scanf("%d",&m);
     getchar();
     scanf("%c",&c);
     //input for varriables

     print_form (n,m,c);

     return 0;
}

    void print_form(int n,int m,char c)
{
     for(int line=0;line<n;line++) //n times loop
     {

        for(int height=0;height<m;height++)
            // m characters
        {
         printf("%c",c);
        }
        for(int g=0;g<line;g++)
        //characters added according to lines
        {
         printf("%c",c);
        }
     printf("\n");
     //  at end of char string new line created
     }
}


