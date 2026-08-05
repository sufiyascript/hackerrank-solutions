#include <stdio.h>

int main() {
    int a[3], b[3];
    int alice = 0, bob = 0;

    // Input Alice's ratings
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    // Input Bob's ratings
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    // Compare the ratings
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice++;
        } else if (a[i] < b[i]) {
            bob++;
        }
    }

    // Output the scores
    printf("%d %d\n", alice, bob);

    return 0;
}
