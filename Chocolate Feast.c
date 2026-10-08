#include <stdio.h>

int chocolateFeast(int n, int c, int m) {
    int chocolates = n / c;
    int wrappers = chocolates;

    while (wrappers >= m) {
        int newChocolates = wrappers / m;
        chocolates += newChocolates;
        wrappers = (wrappers % m) + newChocolates;
    }

    return chocolates;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, c, m;
        scanf("%d %d %d", &n, &c, &m);

        printf("%d\n", chocolateFeast(n, c, m));
    }

    return 0;
}
