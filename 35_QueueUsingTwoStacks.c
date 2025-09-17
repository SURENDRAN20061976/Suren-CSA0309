#include <stdio.h>
#include <stdlib.h>
int main(){ int s1[1000],s2[1000],t1=0,t2=0; int n; if(scanf("%d",&n)!=1) return 0; for(int i=0;i<n;i++){int x; scanf("%d",&x); s1[t1++]=x;} // dequeue one
 while(t1>1) s2[t2++]=s1[--t1]; int de=s1[--t1]; printf("%d\n",de); return 0;}