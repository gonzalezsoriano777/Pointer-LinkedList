#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void push(int, struct Node*);
int pop(struct Node*);
// int peek(struct Node*);


int main(void)
{

    struct Node* head = NULL;
    struct Node* second = NULL; // Creating pointers for those Nodes
    struct Node* third = NULL;


    // Grabbing the pointer and allocating memory
    //(Creating a box for it) where the size of the structure of that node would be
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));



    head-> data = 5;
    head-> next = second;

    second-> data = 7;
    second-> next = third;  // How to grab data and move to the next list of data from head to third

    third -> data = 9;
    third-> next = NULL;

    push(11, head);
    printf("%i", pop(head));


}

void push(int data, struct Node* head) // pushing to each list until reaching the end "NULL"
{
    struct Node* trav = head;

    while(trav->next != NULL)
    {
        trav = trav-> next;
    }

   trav->next = (struct Node*)malloc(sizeof(struct Node));
   trav->next->data = data;
   trav->next->next = NULL;
    // at end of the list
    push(11, head);
    printf("%i", pop(head));
}


int pop(struct Node* head)
{
    struct Node* letsPop = head; // Created the address that will point to the head

    while(letsPop->next->next != NULL) // find the second to last node
    {
        letsPop = letsPop-> next;

    }

    int data = letsPop->next->data;
    free(letsPop->next);
    letsPop->next = NULL;
    return data;

}

int peek(struct Node* head) // finding the last number and grabbing it.
{
    struct Node* trav = head;

    while(trav->next != NULL) // while trav is not equal to NULL
    {
        trav = trav-> next; // transition through each and every list
    }

    int data = trav->next->data; // variable for data
    trav->next->next = NULL;
    return data;

}

