#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


/*
MB-213-A
a4 p11.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

 int count_insensitive(char *str, char c)
{
    int a =0;
    int count =0;


    while(str[a] != '\0')
    //runs loop till '\0'
    {
        if(tolower(str[a]) == c)
        // if upper case or lower case increment count
          {
              count++;
          }
          a++;
    }

 return count;
}

int main()
{
    char *originalstr;

    originalstr = (char*)malloc(50*sizeof(char));


    scanf(" %[^\n]s",originalstr);

    char *newstr = (char*)malloc(strlen(originalstr)*sizeof(char));
    // new string  allocating the required length of orginal string

    newstr = originalstr  ;

    // testing
    int A1 = count_insensitive(newstr,'b');
    int A2 = count_insensitive(newstr,'h');
    int A3 = count_insensitive(newstr,'8');
    int A4 = count_insensitive(newstr,'u');
    int A5 = count_insensitive(newstr,'$');


    printf("The character b occurs %d times.\n",A1);
    printf("The character h occurs %d times.\n",A2);
    printf("The character 8 occurs %d times.\n",A3);
    printf("The character u occurs %d times.\n",A4);
    printf("The character $ occurs %d times.\n",A5);

    free(originalstr); // free the old string
    return 0;
}
