#include <stdio.h>
int main(){ int n; if(scanf("%d",&n)!=1) return 0; long a=0,b=1,sum=0; for(int i=0;i<n;i++){ sum+=a; long t=a+b; a=b;b=t;} printf("%ld\n",sum); return 0;}