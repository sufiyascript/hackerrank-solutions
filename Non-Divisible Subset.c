#include <stdio.h>
#include <stdlib.h>

int nonDivisibleSubset(int k, int s_count, int* s) {
    int *rem = (int *)calloc(k, sizeof(int));
    int i, ans = 0;

    // Count numbers according to their remainder
    for (i = 0; i < s_count; i++) {
        rem[s[i] % k]++;
    }

    // Remainder 0: only one number can be selected
    if (rem[0] > 0)
        ans++;

    // Check pairs of remainders
    for (i = 1; i <= k / 2; i++) {
        if (i == k - i) {
            // When k is even, only one number with remainder k/2
            if (rem[i] > 0)
                ans++;
        } else {
            ans += (rem[i] > rem[k - i]) ? rem[i] : rem[k - i];
        }
    }

    free(rem);
    return ans;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *s = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    int result = nonDivisibleSubset(k, n, s);

    printf("%d\n", result);

    free(s);

    return 0;
}
