#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int binsearch(int a[],int n,int key){ int l=0,r=n-1; while(l<=r){int m=(l+r)/2; if(a[m]==key) return m; if(a[m]<key) l=m+1; else r=m-1;} return -1; }
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); int key; scanf("%d",&key); int lin=-1; for(int i=0;i<n;i++) if(a[i]==key){lin=i; break;} qsort(a,n,sizeof(int),cmp); int bin=binsearch(a,n,key); printf("Linear:%d Binary:%d\n",lin,bin); return 0;}