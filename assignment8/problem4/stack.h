#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct stack
{
unsigned int count;
int array[12];
};

int isEmpty(struct stack *s);
void push(struct stack *s, int number);
int pop(struct stack *s);
void empty(struct stack *s);
int isEmpty(int top, int stack_arr[]);

void push(int x, int *top, int stack_arr[]);

int pop(int *top, int stack_arr[]);

void DecToBin(int num);
#endif