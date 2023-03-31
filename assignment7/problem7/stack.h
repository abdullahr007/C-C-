struct stack
{
   unsigned int count;
   int array[12];
};

int IsEmpty(struct stack &s);
void push(struct stack &s, int number);
int pop(struct stack &s);
void empty(struct stack &s);
