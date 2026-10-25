
#include <stdio.h>
#include <stdlib.h>

void almostSorted(int arr_count, int* arr) {
    int l = -1, r = -1;

    for (int i = 0; i < arr_count - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (l == -1) {
                l = i;
            }
            r = i + 1;
        }
    }

    if (l == -1) {
        printf("yes\n");
        return;
    }

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    int sorted = 1;
    for (int i = 0; i < arr_count - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted) {
        printf("yes\n");
        printf("swap %d %d\n", l + 1, r + 1);
        return;
    }

    temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    int i = l, j = r;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    sorted = 1;
    for (int i = 0; i < arr_count - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted) {
        printf("yes\n");
        printf("reverse %d %d\n", l + 1, r + 1);
    } else {
        printf("no\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    almostSorted(n, arr);

    free(arr);
    return 0;
}
