
#include <stdio.h>

int main() {
    int H, W;
    scanf("%d %d", &H, &W);

    int A[100][100];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int area = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int h = A[i][j];

            if (h == 0) {
                continue;
            }

            // Top and bottom
            area += 2;

            // Front
            area += (i == 0) ? h : (h > A[i - 1][j]
                                      ? h - A[i - 1][j] : 0);

            // Back
            area += (i == H - 1) ? h : (h > A[i + 1][j]
                                          ? h - A[i + 1][j] : 0);

            // Left
            area += (j == 0) ? h : (h > A[i][j - 1]
                                      ? h - A[i][j - 1] : 0);

            // Right
            area += (j == W - 1) ? h : (h > A[i][j + 1]
                                          ? h - A[i][j + 1] : 0);
        }
    }

    printf("%d\n", area);

    return 0;
}
