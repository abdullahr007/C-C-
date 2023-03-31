#include "stack.h"
#include <stdio.h>
/*
MB-213-A
a8 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

//print statements from a7_p7 removed as not required

void push(struct stack* s, int value)
{
    // printf("Pushing ");
    if (s->count == 12) // No space
    {
        printf("Stack Overflow\n");
        // STACK-OVERFLOW 
        return;
    }

    for (int i = s->count; i > 0; --i) // Push everyting to the right
    {
        s->array[i] = s->array[i - 1];
    }
    s->array[0] = value; 
    s->count++; // we have a new element

    // printf("%d\n", value);
}

int pop(struct stack* s)
{
    //printf("Popping ");
    if (s->count == 0) // Nothing to pop
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int num = s->array[0]; // The thingy that will pop

    for(int i = 0; i < s->count - 1; ++i) // Push everything to the left
    {
        s->array[i] = s->array[i + 1];
    }
    s->count--; 

    return num; // Give it back
}

void empty(struct stack* s)
{
    // Print all the elements in order
    for (int i = 0; i < s->count; ++i)
    {
        printf("%d", s->array[i]);
    }
    s->count = 0;

    printf("\n");
}

int isEmpty(struct stack* s)
{
    return s->count == 0;
}
