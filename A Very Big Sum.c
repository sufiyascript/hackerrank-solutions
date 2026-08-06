#include <stdio.h>

long aVeryBigSum(int ar_count, long ar[]) {
    long sum = 0;
    for (int i = 0; i < ar_count; i++) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    long ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld", &ar[i]);
    }

    printf("%ld\n", aVeryBigSum(n, ar));

    return 0;
}
