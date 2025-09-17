#include <stdio.h>
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]); if(n>=5) printf("%d\n",a[4]); else printf("NA\n"); return 0;}