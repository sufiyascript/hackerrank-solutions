
#include <stdio.h>

int main() {
    int n, shifts = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > value) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }

        arr[j + 1] = value;
    }

    printf("%d\n", shifts);

    return 0;
}
