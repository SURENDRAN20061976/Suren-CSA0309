#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*next;}N;
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*head=NULL,*tail=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); N*t=malloc(sizeof(N)); t->v=x; t->next=NULL; if(!head) head=tail=t; else {tail->next=t; tail=t;} } int val; scanf("%d",&val); N*node=malloc(sizeof(N)); node->v=val; node->next=head; head=node; for(N*t=head;t;t=t->next) printf("%d ",t->v); printf("\n"); return 0;}