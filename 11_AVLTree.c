#include <stdio.h>
#include <stdlib.h>
typedef struct Node{int v,h; struct Node*l,*r;}Node;
int height(Node*n){return n?n->h:0;}
Node*new(int v){Node*t=malloc(sizeof(Node));t->v=v;t->l=t->r=NULL;t->h=1;return t;}
Node*rightRotate(Node*y){Node*x=y->l; Node*T=x->r; x->r=y; y->l=T; y->h=1+ (height(y->l)>height(y->r)?height(y->l):height(y->r)); x->h=1+ (height(x->l)>height(x->r)?height(x->l):height(x->r)); return x;}
Node*leftRotate(Node*x){Node*y=x->r; Node*T=y->l; y->l=x; x->r=T; x->h=1+ (height(x->l)>height(x->r)?height(x->l):height(x->r)); y->h=1+ (height(y->l)>height(y->r)?height(y->l):height(y->r)); return y;}
int bf(Node*n){return n?height(n->l)-height(n->r):0;}
Node*insert(Node*node,int v){
 if(!node) return new(v);
 if(v<node->v) node->l=insert(node->l,v);
 else if(v>node->v) node->r=insert(node->r,v);
 else return node;
 node->h=1+ (height(node->l)>height(node->r)?height(node->l):height(node->r));
 int balance=bf(node);
 if(balance>1 && v<node->l->v) return rightRotate(node);
 if(balance<-1 && v>node->r->v) return leftRotate(node);
 if(balance>1 && v>node->l->v){ node->l=leftRotate(node->l); return rightRotate(node);}
 if(balance<-1 && v<node->r->v){ node->r=rightRotate(node->r); return leftRotate(node);}
 return node;
}
void inorder(Node*n){ if(!n) return; inorder(n->l); printf("%d ",n->v); inorder(n->r); }
int main(){ int n; if(scanf("%d",&n)!=1) return 0; Node*root=NULL; for(int i=0;i<n;i++){int x; scanf("%d",&x); root=insert(root,x);} inorder(root); printf("\n"); return 0;}