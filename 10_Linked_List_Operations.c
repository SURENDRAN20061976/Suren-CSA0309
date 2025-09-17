#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void main() {
    struct Node* head = NULL;
    struct Node* temp;
    int n, i, val;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        temp = malloc(sizeof(struct Node));
        temp->data = val;
        temp->next = head;
        head = temp;
    }
    display(head);
}
