#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int page = 1;
    int special = 0;

    for (int i = 0; i < n; i++) {
        int problems = arr[i];
        int problem = 1;

        while (problem <= problems) {
            int limit = problem + k - 1;

            if (limit > problems) {
                limit = problems;
            }

            for (int j = problem; j <= limit; j++) {
                if (j == page) {
                    special++;
                }
            }

            problem = limit + 1;
            page++;
        }
    }

    printf("%d\n", special);

    return 0;
}
