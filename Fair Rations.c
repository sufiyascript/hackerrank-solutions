
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int B[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &B[i]);
        sum += B[i];
    }

    if (sum % 2 != 0) {
        printf("NO\n");
        return 0;
    }

    int count = 0;

    for (i = 0; i < n - 1; i++) {
        if (B[i] % 2 != 0) {
            B[i]++;
            B[i + 1]++;
            count += 2;
        }
    }

    printf("%d\n", count);

    return 0;
}
