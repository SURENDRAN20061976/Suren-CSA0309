#include <stdio.h>
#include <stdlib.h>
int main(){ int q1[1000],q2[1000],f1=0,r1=0,f2=0,r2=0; int n; if(scanf("%d",&n)!=1) return 0; for(int i=0;i<n;i++){int x; scanf("%d",&x); q1[r1++]=x;} // push sequence; pop like stack: move all but last to q2
 int pop=q1[--r1]; printf("%d\n",pop); return 0;}