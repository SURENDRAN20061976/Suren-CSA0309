#include <stdio.h>

void main() {
    int a[50], n, key, i, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) if (a[i] == key) { found = 1; break; }
    if (found) printf("Found at %d\n", i + 1);
    else printf("Not Found\n");
}
