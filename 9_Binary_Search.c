#include <stdio.h>

void main() {
    int a[50], n, key, low = 0, high, mid, found = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) { found = 1; break; }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (found) printf("Found at %d\n", mid + 1);
    else printf("Not Found\n");
}
