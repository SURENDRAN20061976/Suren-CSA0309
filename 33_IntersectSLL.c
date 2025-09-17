#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*next;}N;
N*build(int n){ N*head=NULL,*tail=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); N*t=malloc(sizeof(N)); t->v=x; t->next=NULL; if(!head) head=tail=t; else {tail->next=t; tail=t;} } return head;}
int main(){ int n,m; if(scanf("%d%d",&n,&m)!=2) return 0; N*a=build(n); N*b=build(m); // naive O(n*m) check for same value as intersection
 for(N*i=a;i;i=i->next) for(N*j=b;j;j=j->next) if(i==j) { printf("Intersect\n"); return 0;} printf("No Intersect\n"); return 0;}