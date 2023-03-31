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
    if (queue_is_full(pq)) // Max capacity
    {
        return -1;
    }

    // Create the new node
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->item = item;
    newNode->next = NULL;

    if (queue_is_empty(pq)) // If empty, set the front and the rear
    {
        pq->front = newNode;
        pq->rear = newNode;
        pq->items++;
        return 0;
    }

    // Push it to the rear of the queue
    pq->rear->next = newNode;
    pq->rear = newNode;
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq)) return -1; 
    
    *pitem = pq->front->item; // Store the item

    // Holds as it's name suggests
    Node *nodeToRemove = (Node*) malloc(sizeof(Node));
    nodeToRemove = pq->front;

    // Change the front of the queue
    pq->front = pq->front->next;

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

void printq(Queue *pq)
{
    printf("content of the queue: ");

    Node *step = pq->front;
    while (step != NULL) 
    {
        // Print the node
        printf("%d ", step->item);
        // Go to the next node
        step = step->next;
    }
    printf("\n"); 
}