#include <stdio.h>
#include <limits.h>

void miniMaxSum(int arr_count, int* arr) {
    long long total = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arr_count; i++) {
        total += arr[i];

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    long long minSum = total - max;
    long long maxSum = total - min;

    printf("%lld %lld\n", minSum, maxSum);
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(5, arr);

    return 0;
}
