#include <stdio.h>
#include <stdlib.h>
typedef struct N{int v; struct N*l,*r;}N;
N*new(int v){N*t=malloc(sizeof(N));t->v=v;t->l=t->r=NULL;return t;}
void preorder(N*r){ if(!r) return; printf("%d ",r->v); preorder(r->l); preorder(r->r); }
void inorder(N*r){ if(!r) return; inorder(r->l); printf("%d ",r->v); inorder(r->r); }
void postorder(N*r){ if(!r) return; postorder(r->l); postorder(r->r); printf("%d ",r->v); }
int main(){ int n; if(scanf("%d",&n)!=1) return 0; N*root=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); if(!root) root=new(x); else{ N*q=root; while(1){ if(x<q->v){ if(q->l) q=q->l; else {q->l=new(x); break;} } else { if(q->r) q=q->r; else {q->r=new(x); break;} } }} } preorder(root); printf("\n"); inorder(root); printf("\n"); postorder(root); printf("\n"); return 0;}