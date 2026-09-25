#include <stdio.h>

int jumpingOnClouds(int c_count, int* c) {
    int jumps = 0;
    int i = 0;

    while (i < c_count - 1) {
        // Agar 2 steps aage safe hai
        if (i + 2 < c_count && c[i + 2] == 0) {
            i = i + 2;
        }
        // Warna 1 step aage
        else {
            i = i + 1;
        }

        jumps++;
    }

    return jumps;
}

int main() {
    int n;
    scanf("%d", &n);

    int c[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    printf("%d\n", jumpingOnClouds(n, c));

    return 0;
}
