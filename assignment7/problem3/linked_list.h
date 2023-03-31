
#include <stdio.h>
#include <stdlib.h>

/*
MB-213-A
a7 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

struct list
{
    int item;
    struct list *next;
};
// all are function declerations 
void insertAtBeginning(struct list **ref,int data);

void insertAtEnd(struct list **ref, int data);

struct list* deletelist( struct list **ref); //delete a list

void printList(struct list *list);

