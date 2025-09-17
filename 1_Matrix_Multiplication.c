#include <stdio.h>

void main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], cmat[10][10];

    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (c1 != r2) {
        printf("Incompatible\n");
        return;
    }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            cmat[i][j] = 0;

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                cmat[i][j] += a[i][k] * b[k][j];

    printf("%d %d\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d", cmat[i][j]);
            if (j < c2 - 1)
                printf(" ");
        }
        printf("\n");
    }
}
