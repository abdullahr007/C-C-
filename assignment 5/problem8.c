#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*
MB-213-A
a5 p08.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int **ptr1;
int **ptr2;
int **ptr3;

// function of matrices
void reading(int row1, int col1, int row2, int col2)
{
    int i;
    int j;

    //Allocate memory for the three matrices rows and columns
    ptr1 =(int **) malloc(sizeof(int *)*row1);
    ptr2 =(int **) malloc(sizeof(int *)*row2);
    ptr3 =(int **) malloc(sizeof(int *)*row1);

     for(i=0;i<row1;i++)
        ptr1[i] =(int *)malloc(sizeof(int)*col1);

     for(i=0;i<row2;i++)
        ptr2[i] =(int *)malloc(sizeof(int)*col2);

     for(i=0; i<row1;i++)
        ptr3[i] =(int *)malloc(sizeof(int)*col2);

     //Input for both the matrices
     for(i=0; i< row1; i++)
      {
        for(j=0; j< col1; j++)
         {
           scanf("%d", &ptr1[i][j]);
         }
      }

     for(i=0;i< row2;i++)
     {
        for(j=0;j< col2;j++)
        {
          scanf("%d", &ptr2[i][j]);
        }
     }

     //Display the matrices
    printf("Matrix A:");
     for(i=0;i< row1;i++)
      {
        printf("\n");
        for(j=0;j < col1;j++)
        printf("%d",ptr1[i][j]);
      }

    printf("\nMatrix B:");
     for(i=0;i< row2;i++)
      {
        printf("\n");
        for(j=0;j < col2;j++)
        printf("%d ",ptr2[i][j]);
      }
}

//Function for the multiplication of matrices
void multiply(int row1, int col1, int row2, int col2)
{
    int i;
    int j;
    int k;
    // Multiplication calculation
    for(i=0;i < row1;i++)
    {
        for(j=0;j <col1;j++)
        {
          ptr3[i][j] = 0;
          for(k=0; k<col2; k++)
          ptr3[i][j] = ptr3[i][j]+ptr1[i][k]*ptr2[k][j];
        }
    }
    //Diplay the result matix
    printf("\n\nThe multiplication result AxB:");
     for(i=0; i< row1; i++)
     {
        printf("\n");
        for(j=0; j < col2; j++)
        printf("%d  ", ptr3[i][j]);
     }
}

// Main Function
int main()
{
    int row1;
    int col1;
    int row2;
    int col2;

    scanf("%d", &row1);
    scanf("%d", &col1);

    row2 = col1;
    scanf("%d", &col2);

    reading(row1,col1,row2,col2);
    multiply(row1,col1,row2,col2);

    return 0;
}
