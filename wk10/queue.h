// Header File for the Queue ADT

typedef struct queueInternals *Queue;

// Adds item to the back of the queue
void enqueue(Queue q, int item);

// Removes the item at the front of the queue
int dequeue(Queue q);

// Creates a new, empty queue
Queue newQueue(void);
