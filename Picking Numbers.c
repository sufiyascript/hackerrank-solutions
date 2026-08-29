#include <stdio.h>

int pickingNumbers(int a_count, int* a) {
    int freq[100] = {0};
    int max = 0;

    // Har number ki frequency count karo
    for (int i = 0; i < a_count; i++) {
        freq[a[i]]++;
    }

    // x aur x+1 ko saath lekar maximum length find karo
    for (int x = 0; x < 99; x++) {
        int count = freq[x] + freq[x + 1];

        if (count > max) {
            max = count;
        }
    }

    return max;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = pickingNumbers(n, a);

    printf("%d\n", result);

    return 0;
}
