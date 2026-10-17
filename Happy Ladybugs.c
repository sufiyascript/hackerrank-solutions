
#include <stdio.h>
#include <string.h>

int main() {
    int g;
    scanf("%d", &g);

    while (g--) {
        int n;
        char b[101];
        int freq[256] = {0};
        int empty = 0;
        int happy = 1;

        scanf("%d", &n);
        scanf("%s", b);

        for (int i = 0; i < n; i++) {
            if (b[i] == '_') {
                empty = 1;
            } else {
                freq[(unsigned char)b[i]]++;
            }
        }

        for (int i = 0; i < 256; i++) {
            if (freq[i] == 1) {
                happy = 0;
                break;
            }
        }

        if (!happy) {
            printf("NO\n");
            continue;
        }

        if (empty) {
            printf("YES\n");
            continue;
        }

        for (int i = 0; i < n; i++) {
            if ((i == 0 || b[i] != b[i - 1]) &&
                (i == n - 1 || b[i] != b[i + 1])) {
                happy = 0;
                break;
            }
        }

        printf("%s\n", happy ? "YES" : "NO");
    }

    return 0;
}
