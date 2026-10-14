#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

char grid[100][101];

for (int i = 0; i < n; i++) {
    scanf("%s", grid[i]);
}

for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
        if (grid[i][j] > grid[i - 1][j] &&
            grid[i][j] > grid[i + 1][j] &&
            grid[i][j] > grid[i][j - 1] &&
            grid[i][j] > grid[i][j + 1]) {
            grid[i][j] = 'X';
        }
    }
}

for (int i = 0; i < n; i++) {
    printf("%s\n", grid[i]);
}

return 0;

}
