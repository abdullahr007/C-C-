#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/*
MB-213-A
a5 p09.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
 {

   int rows;
   int columns;
   int depth;
   scanf("%d",&rows);
   scanf("%d",&columns);
   scanf("%d",&depth);

    int*** arr = (int***)malloc(rows * sizeof(int**));

    for (int i = 0;i<rows;i++)
    {
      arr[i] = (int**)malloc(columns * sizeof(int*));
        for (int a=0;a<depth;a++)
        {
          arr[i][a] = (int*)malloc(depth*sizeof(int));
        }
    }

     read_input(arr,rows,columns,depth);

        for (int k =0; k<depth; k++) {
            //print the 2d-array at this dheight
         printf("Section %d:\n",k+1);

         for(int i=0;i<rows;i++)
           {
             for(int a=0;a<columns;a++)
               {
                  printf("%d ",arr[i][a][k]);
               }
                printf("\n"); //end of row
           }
        }

        // deallocate memory
        for (int i = 0;i < rows;i++)
        {
            for (int a = 0;a < columns;a++)
               free(arr[i][a]);
               free(arr[i]);
        }
        free(arr);

        return 0;
}


  void read_input(int ***array,int rows,int columns,int depth)
  {
    for(int i = 0;i<rows;i++) 
    {
       for(int a=0; a<columns; a++)
        {
          for(int k = 0;k<depth;k++)
          {
            scanf("%d",&array[i][a][k]);
          }
        }
    }
}