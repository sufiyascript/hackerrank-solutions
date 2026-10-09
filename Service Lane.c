
#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int width[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &width[i]);
    }

    for (int k = 0; k < t; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        int minWidth = width[i];

        for (int x = i + 1; x <= j; x++) {
            if (width[x] < minWidth) {
                minWidth = width[x];
            }
        }

        printf("%d\n", minWidth);
    }

    return 0;
}
