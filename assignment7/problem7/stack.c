#include<stdio.h>
#include "stack.h"
#include "teststack.c"
/*
MB-213-A
a7 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
int IsEmpty(struct stack &s)
{
   
     if(s.count == 0)
       return 1;
   // not equal to 0 then  stack is not empty
   return 0;
}


//   increments by 1
void push(struct stack &s, int number){
   // stack is full
   if(s.count == 12){
       printf("Stack Overflow");
       return;
   }
   s.array[s.count] = number;
   s.count++;
}

//   removes and returns 
int pop(struct stack &s){
   //   stack is empty
   if(s.count == 0){
       printf("Stack Underflow");
       return -1;
   }
   //   count is non-zero
   s.count--;
   int top_element = s.array[s.count];
   return top_element;
}


//   and prints onto the screen
void empty(struct stack &s){
   int i = s.count;
   for(; i > 0; i--){
       int top_element = pop(s);
       printf("%d ", top_element);
   }
   //   set count to 0
   s.count = 0;
}