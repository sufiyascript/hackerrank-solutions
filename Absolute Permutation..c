
#include <stdio.h>
#include <stdlib.h>

void absolutePermutation(int n, int k) {
    if (k == 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d", i);
            if (i < n) printf(" ");
        }
        printf("\n");
        return;
    }

    if (n % (2 * k) != 0) {
        printf("-1\n");
        return;
    }

    int block = 2 * k;

    for (int i = 1; i <= n; i++) {
        int pos = (i - 1) % block;

        int value;
        if (pos < k) {
            value = i + k;
        } else {
            value = i - k;
        }

        printf("%d", value);
        if (i < n) printf(" ");
    }

    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        absolutePermutation(n, k);
    }

    return 0;
}
