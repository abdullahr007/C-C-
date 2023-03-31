#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
MB-213-A
a5 p03.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int countlow(char*str) //defining the function
{
    int count = 0; 
    //itterating array and counting the characters
    for (int i = 0;i<strlen(str);i++)
    {
       if (str[i] >='j' && str[i] <='z') 
          {
            count++;
          }
    }
  return count;
}


int countlow(char*str); 

int main()
{
    char *j = (char*) malloc(50*sizeof(char)); 

    while (1)
    {
      
     fgets(j,50,stdin);
      
       if (j[0] == '\n') 
        //breaking the loop in case of empty loop
         {
           break;
         }
       
       j[strcspn(j,"\n")] = 0;

        char *str=(char*) malloc(strlen(j) *sizeof(char)); 
        
        strcpy(str, j);
        
        printf("%d\n", countlow(str));
    
    }
  return 0;
}
