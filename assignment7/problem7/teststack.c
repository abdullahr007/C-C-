#include<stdio.h>
#include"stdlib.h"
#include "stack.h"
/*
MB-213-A
a7 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int main()
{
   struct stack s;
   s.count = 0;
   while(true){
       char option;
       scanf("%c", &option);
      
       if(option == 's'){
           int number;
           scanf("%d", &number);
           push(s, number);
           printf("Pushing %d \n", number);
       }
       else if(option == 'p'){
           printf("Popping ");
           int top_element = pop(s);
           if(top_element != -1){
               printf("%d", top_element);
           }
           printf("\n");
       }
       else if(option == 'e'){
           printf("Emptying Stack ");
           empty(s);
           printf("\n");
       }
       else if(option == 'q'){
           printf("Quit\n");
           exit(0);
       }
      
   }
}