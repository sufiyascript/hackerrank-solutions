
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 15
#define MAX_PLUSES 3000

typedef struct {
    int area;
    int cells[MAX * MAX];
} Plus;

int compare(const void *a, const void *b) {
    Plus *p1 = (Plus *)a;
    Plus *p2 = (Plus *)b;
    return p2->area - p1->area;
}

int twoPluses(int n, int m, char grid[MAX][MAX + 1]) {
    Plus pluses[MAX_PLUSES];
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != 'G')
                continue;

            Plus p;
            p.area = 1;
            p.cells[0] = i * m + j;

            pluses[count++] = p;

            for (int k = 1; k < n && k < m; k++) {
                if (i - k < 0 || i + k >= n ||
                    j - k < 0 || j + k >= m)
                    break;

                if (grid[i - k][j] != 'G' ||
                    grid[i + k][j] != 'G' ||
                    grid[i][j - k] != 'G' ||
                    grid[i][j + k] != 'G')
                    break;

                p.cells[p.area++] = (i - k) * m + j;
                p.cells[p.area++] = (i + k) * m + j;
                p.cells[p.area++] = i * m + (j - k);
                p.cells[p.area++] = i * m + (j + k);

                pluses[count++] = p;
            }
        }
    }

    qsort(pluses, count, sizeof(Plus), compare);

    int maxProduct = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            int overlap = 0;

            for (int a = 0; a < pluses[i].area && !overlap; a++) {
                for (int b = 0; b < pluses[j].area; b++) {
                    if (pluses[i].cells[a] == pluses[j].cells[b]) {
                        overlap = 1;
                        break;
                    }
                }
            }

            if (!overlap) {
                int product = pluses[i].area * pluses[j].area;
                if (product > maxProduct)
                    maxProduct = product;
            }
        }
    }

    return maxProduct;
}

int main(void) {
    int n, m;
    char grid[MAX][MAX + 1];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%15s", grid[i]);
    }

    printf("%d\n", twoPluses(n, m, grid));

    return 0;
}
