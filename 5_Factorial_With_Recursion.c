#include <stdio.h>

long long fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

void main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fact(n));
}
