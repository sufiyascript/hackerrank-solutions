
#include <stdio.h>

void insertionSort2(int n, int arr[]) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        for (int k = 0; k < n; k++) {
            printf("%d", arr[k]);

            if (k < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort2(n, arr);

    return 0;
}
