#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
/*
MB-213-A
a8 p2.[c or cpp or h]
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
    free(newnode);
    return 0;
}


int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq)) return -1; // Nothing to remove
    
    *pitem = pq->front->item; // Store the item

    Node *nodeToRemove = (Node*) malloc(sizeof(Node));
    nodeToRemove = pq->front;

    // Change the front of the queue
    pq->front = pq->front->next;


    // Set the rear to the new front node
    if (pq->items <= 2) 
    {
        pq->rear = pq->front;
    }
    
    free(nodeToRemove);

    // One less item
    pq->items--;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}