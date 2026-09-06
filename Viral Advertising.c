#include <stdio.h>

int viralAdvertising(int n) {
    int shared = 5;
    int liked;
    int cumulative = 0;

    for (int day = 1; day <= n; day++) {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
    }

    return cumulative;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", viralAdvertising(n));

    return 0;
}
