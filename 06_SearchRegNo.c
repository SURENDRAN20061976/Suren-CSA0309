#include <stdio.h>
#include <string.h>
int main(){ int n; if(scanf("%d",&n)!=1) return 0; char reg[100][100]; for(int i=0;i<n;i++) scanf("%s",reg[i]); char key[100]; scanf("%s",key); for(int i=0;i<n;i++) if(strcmp(reg[i],key)==0){ printf("Found at %d\n",i); return 0;} printf("Not Found\n"); return 0;}