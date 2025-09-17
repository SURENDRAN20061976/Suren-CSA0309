#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*l,*r;}N;
N*new(int v){N*t=malloc(sizeof(N));t->v=v;t->l=t->r=NULL;return t;}
N*insert(N*root,int v){ if(!root) return new(v); if(v<root->v) root->l=insert(root->l,v); else root->r=insert(root->r,v); return root;}
int search(N*root,int x){ if(!root) return 0; if(root->v==x) return 1; return x<root->v? search(root->l,x):search(root->r,x); }
int findMin(N*root){ while(root->l) root=root->l; return root->v; }
int findMax(N*root){ while(root->r) root=root->r; return root->v; }
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*root=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); root=insert(root,x);} int q; scanf("%d",&q); printf("%d %d %d\n", search(root,q), findMin(root), findMax(root)); return 0;}