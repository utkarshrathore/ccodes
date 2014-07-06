#include "stack.h"

Stack* initStack(int capacity) {
	Stack* s = (Stack*) malloc(sizeof(Stack));
	if(s == NULL)  //can't get enough memeory. Bail out of here.
		return NULL;

	s->content = (int*) malloc(sizeof(int) * capacity);
	s->top = -1;
	s->capacity = capacity;

	return s;
}

int push(Stack* s, int e) {
	if(!s) return -1;
	if (s->top == s->capacity-1) {
		printf("\nOverflow while pushing [%d] onto stack", e);
		return -1;
	} else {
		s->content[++s->top] = e;
		printf("\nPush [%d] (top = %d, capacity = %d)", \
			   e, s->top, s->capacity);
		return 0;
	}
}

int pop(Stack* s) {
	if(!s) return -1;
	if(s->top == -1) {
		printf("\nUnderflow while popping from stack");
		return -1;
	} else {
		int e;
		e = s->content[s->top];
		s->top--;
		printf("\nPopped [%d] (top = %d, capacity = %d)", \
			   e, s->top, s->capacity);
		return e;
	}
}

int isEmpty(Stack* s) {
	if(!s) return -1;
	return (s->top == -1)?1:0;
}

int isFull(Stack* s) {
	if(!s) return -1;
	return (s->top == s->capacity-1)?1:0;
}

int main() {
	Stack* s = initStack(4);
	push(s,2);
	push(s,4);
	push(s,8);
	push(s,16);
	push(s,32); //Overflow
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	pop(s); //Underflow
}