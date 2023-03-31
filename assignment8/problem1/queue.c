#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
/*
MB-213-A
a8 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    Node *newnode;
    newnode = (Node*)malloc (sizeof(Node));
    
    //if it is the first node
    if(newnode == NULL)
      { //make both front and rear points to the new node
        printf("Error allocating memory");
        return -1;
      }

    newnode-> item = item;
    newnode-> next = NULL;

    if(queue_is_empty(pq))
    {
        //add newnode in rear->next
        pq->front = newnode;

        //make the new node as the rear node
        pq-> rear  = newnode;
    }
    else
    {
        pq-> rear -> next = newnode;
        pq -> rear = newnode;
    }
    pq -> items = pq -> items + 1 ;
    return 0;
}


int dequeue(Item *pitem, Queue *pq)
{
   
    
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}