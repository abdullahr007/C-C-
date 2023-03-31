#include "linked_list.h"
/*
MB-213-A
a7 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

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
