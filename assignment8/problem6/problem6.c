#include<stdio.h>
#include<stdlib.h>
/*
MB-213-A
a8 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()

{

    FILE *outin1,*outin2,*outfile;

    char file1[20];
    char file2[20];
    double x;
    double y;

    double sum;
    double difference;
    double product;
    double division;

    scanf("%[^\n]s", file1);
    fflush(stdin);
    scanf("%[^\n]s", file2);

    outin1 = fopen(file1,"r");
    outin2 = fopen(file2,"r");
    //Scanning number

    fscanf(outin1,"%lf", &x);
    fscanf(outin2,"%lf", &y);

    //Closing the files after reading

    fclose (outin1);
    fclose (outin2);

    //Displaying numbers scanned from input files

    sum = x + y;
    difference = x - y;
    product = x * y;
    division= x/y;


    //Opening results.txt

    outfile = fopen("results.txt","w");
    //Writing output
    fprintf(outfile,"Sum = %lf\n", sum);
    fprintf(outfile,"Difference = %lf\n", difference);
    fprintf(outfile,"Product = %lf\n", product);
    fprintf(outfile,"Division = %lf\n", division);
    //Closing the file
    fclose(outfile);
    printf("Result in results.txt");

  return 0;
}
