#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* biggerIsGreater(char* w) {
    int n = strlen(w);

    // Step 1: Find the first character from right
    // which is smaller than the next character
    int i = n - 2;

    while (i >= 0 && w[i] >= w[i + 1]) {
        i--;
    }

    // If no such character exists
    if (i < 0) {
        char *result = malloc(10);
        strcpy(result, "no answer");
        return result;
    }

    // Step 2: Find the smallest character greater than w[i]
    int j = n - 1;

    while (w[j] <= w[i]) {
        j--;
    }

    // Step 3: Swap w[i] and w[j]
    char temp = w[i];
    w[i] = w[j];
    w[j] = temp;

    // Step 4: Reverse the part after i
    int left = i + 1;
    int right = n - 1;

    while (left < right) {
        temp = w[left];
        w[left] = w[right];
        w[right] = temp;

        left++;
        right--;
    }

    return w;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char w[101];

        scanf("%s", w);

        char* result = biggerIsGreater(w);

        printf("%s\n", result);

        if (strcmp(result, "no answer") == 0) {
            free(result);
        }
    }

    return 0;
}
