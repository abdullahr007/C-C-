#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a2 p9.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{
char character;

scanf("%c",&character);

if (character >='0' && character <= '9' ){
/* we using if statement to check if it
is a digit*/
printf("%c is a digit\n",character);
}

else if ((character >= 'A' && character <= 'Z') ||
         (character >= 'a' && character <= 'z')){
/* else if will tell if the character is
a letter or not*/
printf("%c is a letter\n",character);
}

else {
/* character is neither a digit
or a letter */
printf("%c is some other symbol\n",character);
}

return 0;

}
