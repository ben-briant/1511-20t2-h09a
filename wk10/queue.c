// Implementation file for the Queue ADT
// Written by Ben Briant (z5254701) on 5/8/20
// For H09A

#include <stdlib.h>

#include "queue.h"

// Struct representing the overall queue
// front is a pointer to the first node in the queue
// back is a pointer to the last node in the queue
struct queueInternals {
    struct queueNode *front;
    struct queueNode *back;
};


// Standard linked list node
struct queueNode {
    int data;
    struct queueNode *next;
};

static struct queueNode *new_node(int data);

void enqueue(Queue q, int item) {
    
    struct queueNode *new = new_node(item);
    
    if (q->back == NULL) {
        q->front = new;
        q->back = new;
    } else {
        q->back->next = new;
        q->back = new;
    }
    
    
}

int dequeue(Queue q) {
    // TODO: Implement
}

Queue newQueue(void) {
    
    Queue new_queue = malloc(sizeof(struct queueInternals));
    
    new_queue->front = NULL;
    new_queue->back = NULL;
    
    return new_queue;
    
}

// Helper function to create a new node
static struct queueNode *new_node(int data) {
    struct queueNode *new_node = malloc(sizeof(struct queueNode));
    
    new_node->data = item;
    new_node->next = NULL;
    
    return new_node;
}












