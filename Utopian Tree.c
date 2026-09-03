#include <stdio.h>

int utopianTree(int n) {
    int height = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            height = height * 2;   // Spring: height doubles
        } else {
            height = height + 1;   // Summer: height increases by 1
        }
    }

    return height;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        printf("%d\n", utopianTree(n));
    }

    return 0;
}
