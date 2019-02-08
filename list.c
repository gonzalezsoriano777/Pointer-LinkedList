#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;


int main(void)
{
    printf("Hello World!\n");

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


}


int pop(struct Node* head)
{
    struct Node* letsPop = head;

    do while(letsPop->next == NULL)
    {

    }

}

