#include "linked_list.h"

/*
MB-213-A
a7 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


int main() 
{
 
 struct list* head = NULL;
 
 int flag = 1;
 char option;
 int x= 0;

 while(flag)
   {
     scanf("%c", &option);
 
     switch(option)
     {
      case'a':  
        scanf("%d", &x);
        insertAtEnd(&head,x);
      break;
      
      case 'b':
        scanf("%d", &x);
        insertAtBeginning(&head,x);
      break;

      case 'r': 
        head=deletelist(&head);
      break;
      
      case 'p':  //print linked list
        printList(head);
      break;
      
      case 'q':   //quit program
        flag=0;
      break;

     }

   }

}