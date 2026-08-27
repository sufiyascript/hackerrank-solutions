#include <stdio.h>
#include <stdlib.h>

char* catAndMouse(int x, int y, int z) {
    int distanceA = abs(x - z);
    int distanceB = abs(y - z);

    if (distanceA < distanceB) {
        return "Cat A";
    } 
    else if (distanceB < distanceA) {
        return "Cat B";
    } 
    else {
        return "Mouse C";
    }
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        printf("%s\n", catAndMouse(x, y, z));
    }

    return 0;
}
