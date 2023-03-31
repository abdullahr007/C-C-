#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
MB-213-A
a7 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
struct person {
    char name [30];
    int age;
};
//prototype
void bubble_sort( struct person *prs,
               int n,
              int comp( const struct person *p1, const struct person *p2 ) )
{
struct person temp;
int i, j , a,b;

for(i=0;i<n; i++) //loop to declare conditions
{
    for(j=0; j <n-1; j++)
    {
        a=strcmp(prs[j].name, prs[j+1].name);
        b=prs[j+1].age - prs[j].age;


        if(a>0)
        {
            temp=prs[j];
            prs[j]=prs[j+1];
            prs[j+1]=temp;
        }
         else if ( comp( &prs[j+1], &prs[j] ) < 0 )
       {
       struct  person temp =  prs[j+1];
       prs[j+1] = prs[j];
       prs[j] = temp;
      }

        else if (a==0 && b<0)
        {
            temp=prs[j];
            prs[j]=prs[j+1];
            prs[j+1]=temp;
        }

    }
}
}
//function for name
int comp_by_name( const struct person *p1, const struct person *p2 )
{
    int str_cmp = strcmp( p1->name, p2->name );
    int int_cmp = ( p2->age < p1->age ) - ( p1->age < p2->age );

    return str_cmp != 0 ? str_cmp : int_cmp;
}
//function for age
int comp_by_age( const struct person *p1, const struct person *p2 )
{
    int str_cmp = strcmp( p1->name, p2->name );
    int int_cmp = ( p2->age < p1->age ) - ( p1->age < p2->age );

    return int_cmp != 0 ? int_cmp : str_cmp;
}

void bubble_sort( struct person *prs,
                  int n,
                  int comp( const struct person *p1, const struct person *p2 ) );

int comp_by_age( const struct person *p1, const struct person *p2 );
int comp_by_name( const struct person *p1, const struct person *p2 );
int main() 
{
int n, i;
 struct person *prs;

scanf("%d", &n);
getchar();

prs=(struct person *)malloc(sizeof(struct person)*n);

for(i=0;i<n;i++)
{
    fgets(prs[i].name, 30, stdin);
    prs[i].name[strlen(prs[i].name)-1]='\0';
    scanf("%d", &prs[i].age);
    getchar();
}

//calling function
bubble_sort( prs, n, comp_by_name );
 for(i=0;i<n;i++)
 {
   printf("{%s, %d};", prs[i].name, prs[i].age);

 }
 printf("\n");

//calling function 
bubble_sort( prs, n, comp_by_age );
 for(int i=0;i<n;i++){
       printf("{%s, %d}; ",prs[i].name,prs[i].age);
  }
 return 0;
 }
