#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*l,*r;}N;
N*new(int v){N*t=malloc(sizeof(N));t->v=v;t->l=t->r=NULL;return t;}
N*insert(N*root,int v){ if(!root) return new(v); if(v<root->v) root->l=insert(root->l,v); else root->r=insert(root->r,v); return root;}
int kth(N*root,int *k){ if(!root) return -1; int l=kth(root->l,k); if(*k==0) return l; (*k)--; if(*k==0) return root->v; return kth(root->r,k); }
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*root=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); root=insert(root,x);} int k; scanf("%d",&k); int kk=k; int res=kth(root,&kk); printf("%d\n",res); return 0;}