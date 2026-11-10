
#include <stdio.h>
#include <string.h>

char* hackerrankInString(char* s) {
    char target[] = "hackerrank";
    int i, j = 0;

    for (i = 0; s[i] != '\0' && j < 10; i++) {
        if (s[i] == target[j]) {
            j++;
        }
    }

    return (j == 10) ? "YES" : "NO";
}

int main() {
    int q;
    char s[10001];

    scanf("%d", &q);

    while (q--) {
        scanf("%s", s);
        printf("%s\n", hackerrankInString(s));
    }

    return 0;
}
