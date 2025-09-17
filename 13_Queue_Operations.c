#include <stdio.h>
#define MAX 50

int q[MAX], front = 0, rear = -1;

void enqueue(int val) { q[++rear] = val; }
int dequeue() { return q[front++]; }

void main() {
    enqueue(1);
    enqueue(2);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
}
