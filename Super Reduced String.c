
#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    char stack[101];
    int top = -1;

    scanf("%100s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (top >= 0 && stack[top] == s[i]) {
            top--;
        } else {
            stack[++top] = s[i];
        }
    }

    if (top == -1) {
        printf("Empty String\n");
    } else {
        stack[top + 1] = '\0';
        printf("%s\n", stack);
    }

    return 0;
}
