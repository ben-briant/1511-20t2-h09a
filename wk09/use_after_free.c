#include <stdio.h>
#include <stdlib.h>

typedef struct node *Node;

struct node {
    int data;
    Node next;
};

Node new_node(int data);

int main (void) {
    Node first = new_node(1);
    Node second = new_node(2);
    first->next = second;
    /*
    We now have a linked list like:
    1 -> 2 -> X
    */
    
    free(first->next);
    second->data = 3;
    
    // Will we have a 'use after free' error?
}

Node new_node(int data) {
    // Malloc memory for the struct
    Node new = malloc(sizeof(struct node));
    
    // Populate the fields of the struct (give them values)
    new->data = data;
    new->next = NULL;
    
    // Return the pointer to the new struct
    return new;
}







