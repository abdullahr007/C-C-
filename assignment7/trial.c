#include <stdio.h>
#include <string.h>
#define MAX 100

//Structure to store the name and age
struct person{
    char name[30];
    int age;
};

void sortByAge(struct person st[], int n) {
 //two temp variable to store the swapped value
    char temp[MAX]; 
    int ageTemp;
 
    for (int j=0; j<n-1; j++) 
    { 
        for (int i=j+1; i<n; i++) 
        { 
             //if next age  is greater than current age then swap 
            if (st[j].age > st[i].age) 
            { 
                strcpy(temp, st[j].name); 
                ageTemp = st[j].age;
                strcpy(st[j].name, st[i].name);
                st[j].age = st[i].age;
                strcpy(st[i].name, temp); 
                st[i].age = ageTemp;
            } 
        } 
    } 
}

void sortByStrings(struct person st[], int n) 
{ 
    //two temp variable to store the swapped value
    char temp[MAX]; 
    int ageTemp;
  
    
    for (int j=0; j<n-1; j++) 
    { 
        for (int i=j+1; i<n; i++) 
        { 
            //if next name string is greater than current name string then swap 
            if (strcmp(st[j].name, st[i].name) > 0) 
            { 
                strcpy(temp, st[j].name); 
                ageTemp = st[j].age;
                strcpy(st[j].name, st[i].name);
                st[j].age = st[i].age;
                strcpy(st[i].name, temp); 
                st[i].age = ageTemp;
            } 
        } 
    } 
} 

int main()
{
    //variable for number of input
    int n;
    scanf("%d",&n);
    
  struct person st[n];
  
  //take input for struct
  for(int i=0;i<n;i++){
      
      scanf("%s",&st[i].name);
      
      scanf("%d",&st[i].age);
      
  }
  
   //sort by string
   sortByStrings(st, n);
   
    //print sort by string
   for(int i=0;i<n;i++){
      printf("{%s, %d}; ",st[i].name,st[i].age);
     
  }
   
   //sort by age
   printf("\n");
   sortByAge(st,n);
   
   //print sort by age
   for(int i=0;i<n;i++){
       printf("{%s, %d}; ",st[i].name,st[i].age);
  }
   
 
}