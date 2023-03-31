
#include "stack.h"
#include <stdio.h>
/*
MB-213-A
a8 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
    struct stack s;
    s.count = 0;

    int n, temp; // We want to keep n to print it afterwards
    scanf("%d", &n);
    temp = n;

    // Strip down the number to binary and put it in the stack
    while (temp > 0)
    {
        push(&s, temp % 2);
        temp /= 2;
    }

    // Print it's binary representation
    printf("The binary representation of %d is: ", n);
    empty(&s);

    return 0;
}