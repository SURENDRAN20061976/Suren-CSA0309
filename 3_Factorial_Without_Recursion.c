#include <stdio.h>

void main() {
    int n, i;
    long long fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("%lld\n", fact);
}
