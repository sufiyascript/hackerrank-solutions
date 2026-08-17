#include <stdio.h>

int birthday(int s_count, int* s, int d, int m) {
    int count = 0;

    for (int i = 0; i <= s_count - m; i++) {
        int sum = 0;

        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }

        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    int d, m;
    scanf("%d %d", &d, &m);

    int result = birthday(n, s, d, m);

    printf("%d\n", result);

    return 0;
}
