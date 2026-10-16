#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int R, C;
        scanf("%d %d", &R, &C);

        char G[1000][1001];

        for (int i = 0; i < R; i++) {
            scanf("%s", G[i]);
        }

        int r, c;
        scanf("%d %d", &r, &c);

        char P[1000][1001];

        for (int i = 0; i < r; i++) {
            scanf("%s", P[i]);
        }

        int found = 0;

        for (int i = 0; i <= R - r; i++) {
            for (int j = 0; j <= C - c; j++) {
                int match = 1;

                for (int k = 0; k < r; k++) {
                    if (strncmp(G[i + k] + j, P[k], c) != 0) {
                        match = 0;
                        break;
                    }
                }

                if (match) {
                    found = 1;
                    break;
                }
            }

            if (found) {
                break;
            }
        }

        printf("%s\n", found ? "YES" : "NO");
    }

    return 0;
}
