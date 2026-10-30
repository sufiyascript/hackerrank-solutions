
#include <stdio.h>
#include <string.h>

char* superReducedString(char* s) {
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (top > 0 && s[top - 1] == s[i]) {
            top--;
        } else {
            s[top++] = s[i];
        }
    }

    s[top] = '\0';

    if (top == 0) {
        strcpy(s, "Empty String");
    }

    return s;
}

int main() {
    char s[101];

    scanf("%100s", s);

    printf("%s\n", superReducedString(s));

    return 0;
}
