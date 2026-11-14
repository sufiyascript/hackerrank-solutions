
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void separateNumbers(char *s) {
    int n = strlen(s);

    if (s[0] == '0') {
        printf("NO\n");
        return;
    }

    for (int i = 1; i <= n / 2; i++) {
        char first[20];

        strncpy(first, s, i);
        first[i] = '\0';

        unsigned long long start = strtoull(first, NULL, 10);
        unsigned long long num = start;

        int pos = 0;
        int valid = 1;

        while (pos < n) {
            char temp[30];

            sprintf(temp, "%llu", num);

            int len = strlen(temp);

            if (pos + len > n ||
                strncmp(s + pos, temp, len) != 0) {
                valid = 0;
                break;
            }

            pos += len;
            num++;
        }

        if (valid && pos == n) {
            printf("YES %llu\n", start);
            return;
        }
    }

    printf("NO\n");
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        char s[100];
        scanf("%99s", s);

        separateNumbers(s);
    }

    return 0;
}
