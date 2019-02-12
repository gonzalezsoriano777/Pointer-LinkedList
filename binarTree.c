#include <stdio.h>
#include <stdlib.h>
#include <assert.h> // if you want..

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} ListNode;


// Challenge create a BinaryNote struct

// Binary are all based of 0 & 1

typedef struct NodeB // think of it as a tree, theres only two sides to it..
{
    int data;
    struct NodeB *smaller;
    struct NodeB *larger;

} NodeB;

NodeB *root = NULL;

void add(int); // navigate the tree to add a number
int seek(int); // true or false if item exists in tree


void testTree()
{
    add(5);
    assert(seek(5) && "tree contains the number 5"); // modify true to use seek

    add(3);
    add(4);
    assert(seek(9) == 0 && "tree does not contain 9");

}




int main(void)
{
    printf("Hello\n");
    // int data[] = {5, 8, 2, 9, 4, 1, 3};
    testTree();



}


void add(int data)
{

    NodeB* newNode = malloc(sizeof(NodeB));

    newNode->data = data;
    newNode->smaller = NULL;
    newNode->larger = NULL;


    if (root == NULL)
    {
       root = newNode;
       return;
    }

    return;


}

int seek(int data)
{
    return 0;
}









