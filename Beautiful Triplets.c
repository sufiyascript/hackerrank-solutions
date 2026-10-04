#include <stdio.h>

int beautifulTriplets(int d, int arr_count, int* arr) {
    int count = 0;

    for (int i = 0; i < arr_count; i++) {
        for (int j = i + 1; j < arr_count; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr_count; k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    int n, d;

    scanf("%d %d", &n, &d);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = beautifulTriplets(d, n, arr);

    printf("%d\n", result);

    return 0;
}
