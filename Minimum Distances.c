#include <stdio.h>

int minimumDistances(int a_count, int* a) {
    int min = -1;

    for (int i = 0; i < a_count; i++) {
        for (int j = i + 1; j < a_count; j++) {
            if (a[i] == a[j]) {
                int distance = j - i;

                if (min == -1 || distance < min) {
                    min = distance;
                }
            }
        }
    }

    return min;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = minimumDistances(n, a);

    printf("%d\n", result);

    return 0;
}
