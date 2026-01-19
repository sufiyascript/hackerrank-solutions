#include <stdio.h>

int series(int n, int a, int b, int c) {
    // Base cases
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    // Recursive call
    return series(n-1, a, b, c)
         + series(n-2, a, b, c)
         + series(n-3, a, b, c);
}

int main() {
    int n, a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", series(n, a, b, c));

    return 0;
}
