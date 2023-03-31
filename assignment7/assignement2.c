#include <stdio.h>
#include <stdlib.h>
/*
MB-213-A
a7 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
struct node {
char info;
struct node *prev, *next;
};
struct node* start = NULL;

void insertAtFront()
{
char data;
scanf("%c", &data);
struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->info = data;
temp->prev = NULL;
temp->next = start;
start = temp;
}

void deleteElements()
{
char data;
scanf("%c", &data);
int counter=0;
struct node* temp;
temp = start;
struct node* next;
while (temp != NULL) {
next = temp->next;
if (temp->info == data) {
if (start == NULL || temp == NULL) {
continue;
}
if (start == temp) {
start = temp->next;
}
if (temp->next != NULL) {
temp->next->prev = temp->prev;
}
if (temp->prev != NULL) {
temp->prev->next = temp->next;
}
free(temp);
counter++;
}
temp = next;
}
if(counter==0)printf("The element is not in the List!");
}

void traverse()
{
if (start == NULL) {
return;
}
struct node* temp;
temp = start;
while (temp != NULL) {
printf("%c ", temp->info);
temp = temp->next;
}
}

void reversePrint()
{
struct node* tail;
tail = start;
while (tail->next != NULL) {
tail = tail->next;
}
while(tail->prev != NULL) {
printf("%c ", tail->info);
tail = tail->prev;
}
printf("%c ", tail->info);
}

void deleteAllNodes() {
struct node* temp;
while(start != NULL) {
temp = start;
start = start->next;
free(temp);
}
}

int main()

{

    while(1)

    {

        int x;

        char a,b;

        scanf("%d",&x);

        switch(x)

        {

            case 1:



              scanf("%c",&a);

              add_begin(a);

              break;

            case 2:



              scanf("%c",&b);

              remove_all(b);

              break;

            case 3:

              displaylist();

              break;

            case 4:

              displaybackward();

              break;

            case 5:

              exit(0);

        }

    }

}
