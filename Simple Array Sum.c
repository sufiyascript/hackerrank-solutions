#include <stdio.h>

int simpleArraySum(int ar_count, int ar[]) {
    int sum = 0;

    for (int i = 0; i < ar_count; i++) {
        sum += ar[i];
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("%d", simpleArraySum(n, ar));

    return 0;
}
