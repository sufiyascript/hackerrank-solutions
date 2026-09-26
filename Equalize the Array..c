#include <stdio.h>

int equalizeArray(int arr_count, int* arr) {
    int maxCount = 0;

    for (int i = 0; i < arr_count; i++) {
        int count = 0;

        for (int j = 0; j < arr_count; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }
    }

    return arr_count - maxCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = equalizeArray(n, arr);

    printf("%d\n", result);

    return 0;
}
