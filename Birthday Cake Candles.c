#include <stdio.h>

int birthdayCakeCandles(int candles_count, int* candles) {
    int max = candles[0];
    int count = 0;

    // Find tallest candle
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] > max) {
            max = candles[i];
        }
    }

    // Count tallest candles
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] == max) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int candles[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);
    }

    printf("%d\n", birthdayCakeCandles(n, candles));

    return 0;
}
