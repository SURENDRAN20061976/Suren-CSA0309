#include <stdio.h>
#include <string.h>
int cmp(const void*a,const void*b){return *(char*)a-*(char*)b;}
int main(){ char s[1001]; if(!fgets(s,1000,stdin)) return 0; s[strcspn(s,"\n")]=0; int n=strlen(s); qsort(s,n,sizeof(char),cmp); printf("%s\n",s); return 0;}