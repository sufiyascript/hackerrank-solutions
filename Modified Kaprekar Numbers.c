#include <stdio.h>

void kaprekarNumbers(int p, int q) {
    int found = 0;

    for (long long n = p; n <= q; n++) {
        long long square = n * n;

        // Count digits of n
        int digits = 0;
        long long temp = n;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // 10^digits
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= 10;
        }

        // Split square into two parts
        long long right = square % power;
        long long left = square / power;

        // Check Modified Kaprekar condition
        if (left + right == n) {
            printf("%lld ", n);
            found = 1;
        }
    }

    if (!found) {
        printf("INVALID RANGE");
    }

    printf("\n");
}

int main() {
    int p, q;

    scanf("%d", &p);
    scanf("%d", &q);

    kaprekarNumbers(p, q);

    return 0;
}
