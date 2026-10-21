```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** explode(int r, int c, char** grid) {
    char** result = malloc(r * sizeof(char*));

    for (int i = 0; i < r; i++) {
        result[i] = malloc(c + 1);
        memset(result[i], 'O', c);
        result[i][c] = '\0';
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == 'O') {
                result[i][j] = '.';

                if (i > 0)
                    result[i - 1][j] = '.';

                if (i < r - 1)
                    result[i + 1][j] = '.';

                if (j > 0)
                    result[i][j - 1] = '.';

                if (j < c - 1)
                    result[i][j + 1] = '.';
            }
        }
    }

    return result;
}

char** bomberMan(int n, int r, int c, char** grid,
                 int* result_count) {
    *result_count = r;

    char** result = malloc(r * sizeof(char*));

    for (int i = 0; i < r; i++)
        result[i] = malloc(c + 1);

    if (n == 1) {
        for (int i = 0; i < r; i++)
            strcpy(result[i], grid[i]);

        return result;
    }

    if (n % 2 == 0) {
        for (int i = 0; i < r; i++) {
            memset(result[i], 'O', c);
            result[i][c] = '\0';
        }

        return result;
    }

    char** first = explode(r, c, grid);
    char** finalGrid = first;

    if (n % 4 == 1)
        finalGrid = explode(r, c, first);

    for (int i = 0; i < r; i++) {
        strcpy(result[i], finalGrid[i]);
    }

    if (finalGrid != first) {
        for (int i = 0; i < r; i++)
            free(first[i]);

        free(first);
    }

    for (int i = 0; i < r; i++)
        free(finalGrid[i]);

    free(finalGrid);

    return result;
}

int main(void) {
    int r, c, n;

    scanf("%d %d %d", &r, &c, &n);

    char** grid = malloc(r * sizeof(char*));

    for (int i = 0; i < r; i++) {
        grid[i] = malloc(c + 1);
        scanf("%s", grid[i]);
    }

    int result_count;

    char** answer = bomberMan(n, r, c, grid,
                             &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%s\n", answer[i]);
        free(answer[i]);
        free(grid[i]);
    }

    free(answer);
    free(grid);

    return 0;
}
```
