#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void push(int, struct Node*);
int pop(struct Node*);
int peek(struct Node*);
void freeList(struct Node*);


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
    printf("%i\n", pop(head));

    push(7, head);
    printf("%i\n", peek(head));






}

void freeList(struct Node* root) // frees the lists that were ran to not cause a memory leak
{
    struct Node* trav = root; // the head would be considered the root, where the list would start

    if(trav->next == NULL)
    {
        free(trav);
        return;
    }

  if(trav->next->next == NULL) // If the second to last list is NULL
    {
        free(trav->next);// free the last list
        free(trav);
        return; // go back to the previous list which is the second to last one
    }

    freeList(trav->next);// calls the function where it transitions through each node

    free(trav); // fress the root which would also be trav
    return;


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


}


int pop(struct Node* head)
{
     struct Node* letsPop = head; // Created the address that will point to the head

    while(letsPop->next->next != NULL) // find the second to last node
    {
        letsPop = letsPop-> next; // transitions through each and every item

    }

    int data = letsPop->next->data; // grabs the data of each item
    free(letsPop->next); // frees the last item
    letsPop->next = NULL;
    return data;

}

int peek(struct Node* head) // finding the last number and grabbing it.
{
    struct Node* trav = head;

    while(trav->next->next != NULL) // while trav second to last item is not equal to NULL
    {
        trav = trav->next; // move to the end list
    }

    int data = trav->next->data;
    trav->next = NULL; // last item will be null

    return data; // returned to the second to last item
}

