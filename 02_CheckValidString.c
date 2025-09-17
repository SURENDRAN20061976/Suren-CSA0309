#include <stdio.h>
#include <string.h>
int main(){ char s[1001]; if(!fgets(s,1000,stdin)) return 0; s[strcspn(s,"\n")]=0; printf("%s\n", s[0]? "Valid":"Invalid"); return 0;}