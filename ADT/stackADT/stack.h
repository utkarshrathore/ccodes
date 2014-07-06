/*
 * Stack ADT implementation using array
 * Behaviour is undefined for a malformed stack for all operations
 */

#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *content;
	int top;
	int capacity;
} Stack;

/* Initialize a stack with capacity c and return the stack reference */
extern Stack* initStack(int c);

/* Push the element e onto stack s
   Return 0 if successful, -1 otherwise
 */
extern int push(Stack* s, int e);

/* Pop and return the LIFO element from stack s if successful
   return -1 otherwise
 */
extern int pop(Stack* s);

/* Return 1 if the stack s if empty, 0 otherwise */
extern int isEmpty(Stack* s);

/* Return 1 if the stack s if full, 0 otherwise */
extern int isFull(Stack* s);

/* Return the current size of stack s */
extern int stackSize(Stack* s);

// * -> http://bit.ly/1vMWZ34

#endif