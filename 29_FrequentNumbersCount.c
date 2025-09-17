#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b){return (*(int*)a-*(int*)b);}
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); qsort(a,n,sizeof(int),cmp); int cnt=1; for(int i=1;i<n;i++){ if(a[i]==a[i-1]) cnt++; else { printf("%d:%d\n",a[i-1],cnt); cnt=1;} } if(n) printf("%d:%d\n",a[n-1],cnt); return 0;}