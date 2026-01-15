#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000];
    char *token;

    // input lena
    scanf("%[^\n]", s);

    // string ko space se todna
    token = strtok(s, " ");

    // har word new line me print
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
