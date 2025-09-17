#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); for(int i=0;i<n;i++) printf("%d ",a[i]); printf("\n"); for(int i=n-1;i>=0;i--) printf("%d ",a[i]); printf("\n"); return 0;}