/*
MB-213-A
a3 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c)
{
     int idx;

     for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
       //asking for loop to run return function
    }
    return idx;
}
int main() {
    char line[80];
    while (1)
      {

        printf("Enter string:\n");

        fgets(line, sizeof(line), stdin);

        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));

       }

}
