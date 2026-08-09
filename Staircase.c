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

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print #
        for (int j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    staircase(n);

    return 0;
}
