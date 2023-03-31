#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char const *argv[])
{
     char one [70], two[70];

     fgets(one,70,stdin);
     one[strcspn(one,"\n")] = 0 ;
     fgets( two,70,stdin);
     two[strcspn(two,"\n")] = 0;

     char one_copy[70];  // copy of the varible "one"
     strcpy(one_copy,one);

     char c;
     // making a new variable for 5th part of problem
     scanf("%c",&c);

     printf("length1=%lu\n ", strlen(one));
     printf("length2=%lu\n ", strlen(two));

     strcat(one,two);
     // strings combining

     printf("concatenation=%s\n",one);

     char a[70];
     strcpy(a, two);

     printf("copy=%s\n",a);

     if(strcmp(one_copy,two)<0)
     {
         printf("one is smaller than two\n");
     }
     else if (strpcmp(one_copy,two)>0)
     {
         printf("one is larger than two\n");
     }
     else
     {
         printf("one is equal to two\n");
     }
     if(strchr(two,c)--NULL)
     {
         printf("The character is not in the string\n");
     }
    else
    {
        printf("position=%ld\n",strchr(two,c)-two);
    }
    return 0;
}