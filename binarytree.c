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


}

void push(int data, struct Node* head) // pushing to each list until reaching the end "NULL"
{

}


int pop(struct Node* head)
{
    return 0;
}



