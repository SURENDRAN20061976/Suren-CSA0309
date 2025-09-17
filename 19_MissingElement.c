#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); for(int i=1;i<n;i++) if(a[i]!=a[i-1]+1){ printf("%d\n",a[i-1]+1); return 0;} printf("None\n"); return 0;}