#include <stdio.h>
int main(){int n,rev=0,rem; if(scanf("%d",&n)!=1) return 0; while(n!=0){rem=n%10; rev=rev*10+rem; n/=10;} printf("%d\n",rev); return 0;}