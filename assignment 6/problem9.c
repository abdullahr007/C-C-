#include<stdio.h>
#include<stdlib.h>
/*
MB-213-A
a6 p9.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

struct list
{
  int item;
  struct list* next;
};

void insertAtBeginning( struct list** ref ,int data)
{
    //Allocate memory to new list
  struct list* new_list=(struct list*)malloc(sizeof(struct list));

  new_list->item=data;
  new_list->next=*ref;
  *ref=new_list;

 return;

}

void insertAtEnd( struct list** ref ,int data)
{

   struct list* new_list=(struct list*)malloc(sizeof(struct list));
   //stored start address of linked list 

   struct list* last=*ref;
   new_list->item=data;
   new_list->next=NULL;

    if(*ref==NULL)
     {
        *ref =new_list;
        return;
     }
     while(last->next!=NULL)
     {
       last=last->next;
     }

    last->next=new_list;
   return;
}

//Insert new list
void insertAtPosition(struct list** ref, int pos, int data)
{

     struct list* last=*ref;
     int len = 0;
     //Finding the length of linked list
     while(last)
     {
       len++;
       last=last->next;
     } 

    if(pos<0||pos>len)
     {
        printf("Invalid position!\n");
       return;
     }

    else
     {
          //Allocate memory 
        struct list* new_list=(struct list*)malloc(sizeof(struct list));
        new_list->item = data;
        if(pos==0)//First position of Linked List
         {
            new_list->next=*ref;
            *ref= new_list;
            return;
         }
        else
         {
           last=*ref;

          while(--pos)
            {
              last=last->next;
            }

            new_list->next =last->next;
            last->next=new_list;
           
           return;
          }
 
     }

    

}


void reverseList(struct list** ref)
  {
    struct list* curr=*ref;//Current list
    struct list* pre=NULL;//Previous list
    struct list* next_list=NULL;//Next list

    while(curr)
    {
        next_list=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next_list;
    }
    *ref=pre;

  return;
}

struct list* deletelist(struct list** ref)
{
   struct list* temp =*ref;
   struct list* temp2 =temp->next;
   temp->next =NULL;
   free(temp);
  
  return temp2;
}

//printing linked list
void printList(struct list* list)
{
    while(list !=NULL)
    {
      printf("%d ", list->item);
     list=list->next;
    }
    printf("\n");
}

int main()
{
    struct list* head=NULL;
    int position;
    int flag= 1;   
    char option;
    int x=0;

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
             insertAtBeginning( &head,x);
            break;

            case 'i':
              scanf("%d%d",&position, &x);
              insertAtPosition(&head,position, x);
            break;

            case 'p':
               printList(head);
            break;

            case 'q':
               flag=0;
            break;

            case 'r':
               head=deletelist(&head);
            break;

            case 'R':
               reverseList(&head);
            break;   

        }    

    }

  return 0;

}