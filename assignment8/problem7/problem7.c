#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a8 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{
    FILE *fp1,*fp2,*fp3;
    char ch[1000];
    // Open two files to be merged
    fp1=fopen("text1.txt","r");
    fp2=fopen("text2.txt","r");
    fp3=fopen("merge12.txt","w");
    if((fp1==NULL)||(fp2==NULL))
    {
        printf("ERROR");
        exit(1);
    }
   // Copy contents of second file to file3.txt
  while (fgets(ch,1000, fp1)!=NULL)
		fputs(ch, fp3);
  while (fgets(ch,1000, fp2)!=NULL)
		fputs(ch, fp3);
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   printf("Files merged");
   return 0;
}
