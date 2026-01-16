#include <stdio.h>

int main() {
    char s[1000];
    int freq[10] = {0};

    // Read the string
    scanf("%s", s);

    // Traverse the string
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            freq[digit]++;
        }
    }

    // Print frequencies of digits 0 to 9
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
