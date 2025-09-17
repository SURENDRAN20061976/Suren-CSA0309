#include <stdio.h>

void main() {
    int a[50], n, i, choice, pos, val;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &choice);
    if (choice == 1) {
        scanf("%d %d", &pos, &val);
        for (i = n; i >= pos; i--) a[i] = a[i - 1];
        a[pos - 1] = val;
        n++;
    } else if (choice == 2) {
        scanf("%d", &pos);
        for (i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
        n--;
    }
    for (i = 0; i < n; i++) printf("%d ", a[i]);
}
