#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long repeatedString(char* s, long n) {
    long len = strlen(s);
    long countA = 0;

    // Count 'a' in the original string
    for (long i = 0; i < len; i++) {
        if (s[i] == 'a') {
            countA++;
        }
    }

    // Complete repetitions
    long repetitions = n / len;
    long answer = countA * repetitions;

    // Remaining characters
    long remaining = n % len;

    for (long i = 0; i < remaining; i++) {
        if (s[i] == 'a') {
            answer++;
        }
    }

    return answer;
}

int main() {
    char s[101];
    long n;

    scanf("%s", s);
    scanf("%ld", &n);

    long result = repeatedString(s, n);

    printf("%ld\n", result);

    return 0;
}
