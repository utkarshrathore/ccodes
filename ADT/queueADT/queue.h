/*
 * Queue ADT implementation using circular array
 * Behaviour is undefined for a malformed queue for all operations
 */
 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
		int* content; //queue contents. Yes, I prefer this syntax *
		int front; //dequeue here
		int rear;  //queue here
		int size;
		int capacity;
} Queue;

/* Initialize a queue with capacity c and return the queue reference */
extern Queue* initQueue(int c);

/* Enqueue the element e in queue q
   Return 0 if successful, -1 otherwise
 */
extern int enqueue(Queue* q, int e);

/* Dequeue and return the FIFO element from queue q if successful
   return -1 otherwise
 */
extern int dequeue(Queue* q);

/* Return 1 if the queue q if empty, 0 otherwise */
extern int isEmpty(Queue* q);

/* Return 1 if the queue q if full, 0 otherwise */
extern int isFull(Queue* q);

/* Return the current size of queue q */
extern int queueSize(Queue* q);

// * -> http://bit.ly/1vMWZ34