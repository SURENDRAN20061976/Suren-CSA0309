#include <stdio.h>
#include <stdlib.h>
typedef struct D{int v; struct D*prev,*next;}D;
int main(){ int n; if(scanf("%d",&n)!=1) return 0; D*head=NULL,*tail=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); D*t=malloc(sizeof(D)); t->v=x; t->prev=tail; t->next=NULL; if(tail) tail->next=t; else head=t; tail=t;} for(D*t=head;t;t=t->next) printf("%d ",t->v); printf("\n"); return 0;}