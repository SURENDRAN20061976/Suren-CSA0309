#include <stdio.h>
#include <string.h>
int main(){ char h[1001],n[1001]; if(!fgets(h,1000,stdin)) return 0; if(!fgets(n,1000,stdin)) return 0; h[strcspn(h,"\n")]=0; n[strcspn(n,"\n")]=0; char *p=strstr(h,n); if(p) printf("%d\n",(int)(p-h)); else printf("-1\n"); return 0;}