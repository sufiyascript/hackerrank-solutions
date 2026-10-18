
#include <stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);

    long long start = 3;

    while (t > start) {
        t -= start;
        start *= 2;
    }

    printf("%lld\n", start - t + 1);

    return 0;
}
