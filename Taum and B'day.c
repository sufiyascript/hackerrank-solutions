#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long b, w;
        long long bc, wc, z;

        scanf("%lld %lld", &b, &w);
        scanf("%lld %lld %lld", &bc, &wc, &z);

        long long blackCost;
        long long whiteCost;

        if (bc > wc + z)
            blackCost = wc + z;
        else
            blackCost = bc;

        if (wc > bc + z)
            whiteCost = bc + z;
        else
            whiteCost = wc;

        long long total = b * blackCost + w * whiteCost;

        printf("%lld\n", total);
    }

    return 0;
}
