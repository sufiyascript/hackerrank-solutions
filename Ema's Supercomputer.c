
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 15

typedef struct {
    int r, c, size, area;
    int cells[MAX * MAX][2];
} Plus;

int main() {
    int n, m;
    char grid[MAX][MAX + 1];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    Plus pluses[MAX * MAX];
    int count = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] != 'G')
                continue;

            int size = 0;

            while (1) {
                int up = r - size;
                int down = r + size;
                int left = c - size;
                int right = c + size;

                if (up < 0 || down >= n ||
                    left < 0 || right >= m)
                    break;

                if (grid[up][c] != 'G' ||
                    grid[down][c] != 'G' ||
                    grid[r][left] != 'G' ||
                    grid[r][right] != 'G')
                    break;

                Plus p;
                p.r = r;
                p.c = c;
                p.size = size;
                p.area = 4 * size + 1;

                int k = 0;
                for (int d = -size; d <= size; d++) {
                    p.cells[k][0] = r + d;
                    p.cells[k++][1] = c;
                    if (d != 0) {
                        p.cells[k][0] = r;
                        p.cells[k++][1] = c + d;
                    }
                }

                pluses[count++] = p;
                size++;
            }
        }
    }

    int maxProduct = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            int overlap = 0;

            for (int a = 0; a < pluses[i].area; a++) {
                for (int b = 0; b < pluses[j].area; b++) {
                    if (pluses[i].cells[a][0] ==
                            pluses[j].cells[b][0] &&
                        pluses[i].cells[a][1] ==
                            pluses[j].cells[b][1]) {
                        overlap = 1;
                        break;
                    }
                }
                if (overlap)
                    break;
            }

            if (!overlap) {
                int product = pluses[i].area * pluses[j].area;
                if (product > maxProduct)
                    maxProduct = product;
            }
        }
    }

    printf("%d\n", maxProduct);

    return 0;
}
