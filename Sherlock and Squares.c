#include <stdio.h>
#include <math.h>

int squares(int a, int b) {
    int count = 0;
    
    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));
    
    count = end - start + 1;
    
    if (count < 0)
        count = 0;
    
    return count;
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", squares(a, b));
    }

    return 0;
}
