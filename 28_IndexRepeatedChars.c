#include <stdio.h>
#include <string.h>
int main(){ char s[1001]; if(!fgets(s,1000,stdin)) return 0; s[strcspn(s,"\n")]=0; int seen[256]; for(int i=0;i<256;i++) seen[i]=-1; for(int i=0;s[i];i++){ unsigned char c=s[i]; if(seen[c]!=-1) printf("%d ",i); else seen[c]=i; } printf("\n"); return 0;}