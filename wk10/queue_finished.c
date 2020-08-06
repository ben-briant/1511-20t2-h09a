// Finished implementation file for the Queue ADT
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

static struct queueNode *newNode(int item);

void enqueue(Queue q, int item) {

    struct queueNode *new = newNode(item);

    if (q->front == NULL) {
        // Then the queue is empty.
        // So, the first and last item in the queue is the new item
        q->front = new;
        q->back = new;
    } else {
        // Then the queue already has items
        // Make the last item in the queue point to the new node
        q->back->next = new;
        // the new node is now the last item in the queue
        q->back = new;
    }
}

int dequeue(Queue q) {
    if (q->front == NULL) {
        // Then there has been an error, and we are 
        // trying to remove from an empty queue
        exit(1);
    }

    int data = q->front->data;

    if (q->front == q->back) {
        // Then the front is the same as the back,
        // so there is only one node in the queue
        free(q->front);
        q->front = NULL;
        q->back = NULL;
    } else {
        // Create a temp next pointer so that we
        // don't get a use after free error
        struct queueNode *next = q->front->next;
        free(q->front);
        q->front = next;
    }

    return data;
}

Queue newQueue(void) {
    Queue new = malloc(sizeof(struct queueInternals));

    // Make the front of the queue point to NULL (There are no items in the queue)
    new->front = NULL;
    // Make the back of the queue point to NULL as well
    new->back = NULL;

    // Return the newly created queue
    return new;
}


struct queueNode *newNode(int item) {
    struct queueNode *new = malloc(sizeof(struct queueNode));

    new->data = item;
    new->next = NULL;

    return new;
}
