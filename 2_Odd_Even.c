#include <stdio.h>

void main() {
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0)
            printf("%d Even\n", x);
        else
            printf("%d Odd\n", x);
    }
}
