
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int theLoveLetterMystery(char* s) {
    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++) {
        count += abs(s[i] - s[len - 1 - i]);
    }

    return count;
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        char s[10001];
        scanf("%s", s);

        int result = theLoveLetterMystery(s);
        printf("%d\n", result);
    }

    return 0;
}
