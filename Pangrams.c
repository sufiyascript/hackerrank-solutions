
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* pangrams(char* s) {
    int alphabet[26] = {0};
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';

            if (alphabet[index] == 0) {
                alphabet[index] = 1;
                count++;
            }
        }
    }

    if (count == 26) {
        return "pangram";
    } else {
        return "not pangram";
    }
}

int main() {
    char s[10001];

    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    printf("%s\n", pangrams(s));

    return 0;
}
