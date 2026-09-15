#include <stdio.h>

int findDigits(int n) {
    int original = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit != 0 && original % digit == 0) {
            count++;
        }

        n = n / 10;
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        printf("%d\n", findDigits(n));
    }

    return 0;
}
