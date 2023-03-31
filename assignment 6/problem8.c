#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a6 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

struct list 
 {
   int item;
   struct list*next;
 };

  //implementing functions

 void insertAtBeginning(struct list** ref,int data)
  {

   struct list* new_list = (struct list*)malloc(sizeof(struct list));

   // Allocate memory to a list

    new_list->item=data; 
    new_list->next=(*ref);
    (*ref)=new_list; 
 
 }

// insertion  the ending of the linkelist

void insertAtEnd(struct list** ref, int data) 
{

  struct list* new_list= (struct list*)malloc(sizeof(struct list));
  struct list* last= *ref;

  new_list->item =data;
  new_list->next =NULL;

  if (*ref == NULL) 
  {
    *ref = new_list;
    return;
  }
  while (last->next != NULL)
  {
    last = last->next;
    last->next = new_list;
    return;
  }
}

// Function begining of the linkelist

struct list* deletelist( struct list** ref) 
{
  if(*ref==NULL)
   {
     return *ref;
   }
  
  struct list *temp = *ref;
  struct list *temp2 = temp->next;
  
  temp->next= NULL;
  free(temp);
 
 return temp2;

}

void printList(struct list* list)
{
  if(list== NULL)
   {
     printf("\n");
     return;
   }
  while (list != NULL)
   {
     printf("%d ",list->item);
     list=list->next;
   }
 printf("\n");

}



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