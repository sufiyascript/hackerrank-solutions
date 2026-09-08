#include <stdio.h>

int viralAdvertising(int n) {
    int shared = 5;
    int liked;
    int total = 0;

    for (int day = 1; day <= n; day++) {
        liked = shared / 2;
        total += liked;
        shared = liked * 3;
    }

    return total;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", viralAdvertising(n));

    return 0;
}
