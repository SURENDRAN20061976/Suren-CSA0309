#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*next;}N;
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*head=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); N*t=malloc(sizeof(N)); t->v=x; t->next=head; head=t;} // head is reversed already because insert at front
 for(N*t=head;t;t=t->next) printf("%d ",t->v); printf("\n"); return 0;}