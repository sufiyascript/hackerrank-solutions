
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n], left[n], right[n];
    int l = 0, r = 0;
    int pivot;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pivot = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < pivot) {
            left[l++] = arr[i];
        } else {
            right[r++] = arr[i];
        }
    }

    for (i = 0; i < l; i++) {
        printf("%d ", left[i]);
    }

    printf("%d", pivot);

    for (i = 0; i < r; i++) {
        printf(" %d", right[i]);
    }

    printf("\n");

    return 0;
}
