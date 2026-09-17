#include <stdio.h>

void extraLongFactorials(int n) {
    int result[200];
    int size = 1;

    result[0] = 1;

    for (int i = 2; i <= n; i++) {
        int carry = 0;

        for (int j = 0; j < size; j++) {
            int value = result[j] * i + carry;
            result[j] = value % 10;
            carry = value / 10;
        }

        while (carry > 0) {
            result[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }

    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    extraLongFactorials(n);

    return 0;
}
