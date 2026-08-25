#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countingValleys(int steps, char* path) {
    int level = 0;
    int valleys = 0;

    for (int i = 0; i < steps; i++) {

        if (path[i] == 'U') {
            level++;
        }
        else if (path[i] == 'D') {
            level--;

            // Entering a valley
            if (level == -1) {
                valleys++;
            }
        }
    }

    return valleys;
}

int main() {
    int steps;
    char path[1000001];

    scanf("%d", &steps);
    scanf("%s", path);

    int result = countingValleys(steps, path);

    printf("%d\n", result);

    return 0;
}
