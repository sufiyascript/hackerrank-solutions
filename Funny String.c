
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funnyString(char* s) {
    int n = strlen(s);

    for (int i = 1; i < n; i++) {
        int diff1 = abs(s[i] - s[i - 1]);
        int diff2 = abs(s[n - i] - s[n - i - 1]);

        if (diff1 != diff2) {
            return "Not Funny";
        }
    }

    return "Funny";
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        char s[10001];
        scanf("%10000s", s);

        printf("%s\n", funnyString(s));
    }

    return 0;
}
