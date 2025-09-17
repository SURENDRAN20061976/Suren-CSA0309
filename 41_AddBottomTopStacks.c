#include <stdio.h>
int main(){ int n; if(scanf("%d",&n)!=1) return 0; int s[n]; for(int i=0;i<n;i++) scanf("%d",&s[i]); if(n==0){printf("0\n"); return 0;} printf("%d\n", s[0]+s[n-1]); return 0;}