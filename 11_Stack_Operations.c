#include <stdio.h>
#define MAX 50

int stack[MAX], top = -1;

void push(int val) { stack[++top] = val; }
int pop() { return stack[top--]; }
int peek() { return stack[top]; }

void main() {
    push(10);
    push(20);
    printf("%d\n", peek());
    printf("%d\n", pop());
}
