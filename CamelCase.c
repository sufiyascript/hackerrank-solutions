#include <stdio.h>
#include <string.h>
#include <ctype.h>

int camelcase(char* s) {
    int count = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    char s[1000001];

    scanf("%1000000s", s);

    int result = camelcase(s);

    printf("%d\n", result);

    return 0;
}
