
#include <stdio.h>
#include <string.h>

int alternatingCharacters(char *s) {
    int count = 0;
    int i;

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    int q;
    char s[100001];

    scanf("%d", &q);

    while (q--) {
        scanf("%s", s);

        int result = alternatingCharacters(s);

        printf("%d\n", result);
    }

    return 0;
}
