// Main file, where we can use the Queue ADT
// Written by Ben Briant (z5254701) on 5/8/2020
// For H09A

#include <stdio.h>

#include "queue.h"

int main (void) {
    Queue queue = newQueue();

    // Add 1 to the queue
    printf("Adding 1 to the queue...\n");
    enqueue(queue, 1);
    /*
    Now the queue looks like:
    1 -> X
    */

    printf("Adding 2 to the queue...\n");
    // Add 1 to the queue
    enqueue(queue, 2);
    /*
    Now the queue looks like:
    1 -> 2 -> X
    */
    
    // Add 3 to the queue
    printf("Adding 3 to the queue...\n");
    enqueue(queue, 3);
    /*
    Now the queue looks like:
    1 -> 2 -> 3 -> X
    */

    // Dequeue an item
    int item;
    item = dequeue(queue);
    printf("Item dequeued: %d\n", item);
    /*
    Now the queue looks like:
    2 -> 3 -> X
    */

    // Dequeue another item
    item = dequeue(queue);
    printf("Item dequeued: %d\n", item);
    /*
    Now the queue looks like:
    3 -> X
    */

    // Add 4 to the queue
    printf("Adding 4 to the queue...\n");
    enqueue(queue, 4);
    /*
    Now the queue looks like:
    3 -> 4 -> X
    */

    // Dequeue
    item = dequeue(queue);
    printf("Item dequeued: %d\n", item);
    /*
    Now the queue looks like:
    4 -> X
    */

    // Dequeue again
    item = dequeue(queue);
    printf("Item dequeued: %d\n", item);
    /*
    Now the queue looks like:
    X
    */
    
    // How would we check if there are items remaining in the queue?
}
