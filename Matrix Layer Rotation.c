
#include <stdio.h>

int main() {
    int m, n, r;
    scanf("%d %d %d", &m, &n, &r);

    int a[300][300];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int layers = (m < n ? m : n) / 2;

    for (int l = 0; l < layers; l++) {
        int top = l;
        int left = l;
        int bottom = m - 1 - l;
        int right = n - 1 - l;

        int len = 2 * (bottom - top) + 2 * (right - left);
        int rot = r % len;

        int temp[1200];
        int k = 0;

        for (int j = left; j <= right; j++)
            temp[k++] = a[top][j];

        for (int i = top + 1; i <= bottom; i++)
            temp[k++] = a[i][right];

        for (int j = right - 1; j >= left; j--)
            temp[k++] = a[bottom][j];

        for (int i = bottom - 1; i > top; i--)
            temp[k++] = a[i][left];

        k = 0;

        for (int j = left; j <= right; j++)
            a[top][j] = temp[(k++ + rot) % len];

        for (int i = top + 1; i <= bottom; i++)
            a[i][right] = temp[(k++ + rot) % len];

        for (int j = right - 1; j >= left; j--)
            a[bottom][j] = temp[(k++ + rot) % len];

        for (int i = bottom - 1; i > top; i--)
            a[i][left] = temp[(k++ + rot) % len];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
