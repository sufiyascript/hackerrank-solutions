#include <stdio.h>

int jumpingOnClouds(int c_count, int* c, int k) {
    int energy = 100;
    int position = 0;

    do {
        position = (position + k) % c_count;
        energy--;

        if (c[position] == 1) {
            energy -= 2;
        }

    } while (position != 0);

    return energy;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int c[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }

    int result = jumpingOnClouds(n, c, k);

    printf("%d\n", result);

    return 0;
}
