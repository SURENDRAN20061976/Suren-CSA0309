#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v;struct N*next;}N;
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*head=NULL,*t; for(int i=0;i<n;i++){int x; scanf("%d",&x); N*node=malloc(sizeof(N)); node->v=x; node->next=head; head=node;} // reversed built to make simple
 int arr[n]; int i=0; for(t=head;t;t=t->next) arr[i++]=t->v; int ok=1; for(int j=0;j<i/2;j++) if(arr[j]!=arr[i-1-j]) ok=0; printf(ok? "Palindrome\n":"Not Palindrome\n"); return 0;}