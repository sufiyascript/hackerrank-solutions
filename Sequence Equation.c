#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p[n + 1];

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    for (int x = 1; x <= n; x++) {
        for (int i = 1; i <= n; i++) {
            if (p[p[i]] == x) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
