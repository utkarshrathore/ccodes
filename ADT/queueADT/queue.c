#ifndef QUEUE_H
#define QUEUE_H
#include "queue.h"
#endif

Queue* initQueue(int capacity) {
	Queue* q = (Queue*) malloc(sizeof(Queue));
	if(q == NULL)  //can't get enough memeory. Bail out of here.
		return NULL;
	
	q->content = (int*) malloc(sizeof(int) * capacity);
	q->front = -1;
	q->rear = -1;
	q->size = 0;
	q->capacity = capacity;
	return q;
}

int enqueue(Queue* q, int e) {
	if(!q) return -1; 
	if(q->size == q->capacity) {	
		printf("\nOverflow while enqueing [%d] into queue", e);
		return -1;
	} else {
		q->rear = (q->rear+1) % (q->capacity);
		if (q->front == -1)
			q->front = q->rear;
		q->content[q->rear] = e;
		q->size++;
		printf("\nEnqueued [%d] (front = %d, rear = %d, size = %d, capacity = %d)", \
			   e, q->front, q->rear, q->size, q->capacity);
		return 0;
	}
}

int dequeue(Queue* q) {
	if(!q) return -1;
	int ret = -1;
	if(q->size == 0) {
		printf("\nUnderflow while dequeuing the queue");
		return ret;
	} else {
		ret = q->content[q->front];
		q->front = (q->front+1) % (q->capacity);
		q->size--;
		printf("\nDequeued [%d] (front = %d, rear = %d, size = %d, capacity = %d)", \
			   ret, q->front, q->rear, q->size, q->capacity);
		return ret;
	}
}

int isEmpty(Queue* q) {
	if(!q) return -1; //Malfomred queue
	return (q->size == 0)?1:0;
}

int isFull(Queue* q) {
	if(!q) return -1;
	return (q->size == q->capacity)?1:0;
}

int queueSize(Queue* q) {
	if(!q) return -1;
	return q->size;
}


int main() {
	Queue* q = initQueue(4);

	/* Queue operations. No checking return types - error messages should do */
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	dequeue(q);
    dequeue(q);
	enqueue(q,5);
	enqueue(q,6);
	enqueue(q,7);
	enqueue(q,8);
}


