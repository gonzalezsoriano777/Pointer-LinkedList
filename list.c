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

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
}
