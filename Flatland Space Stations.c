#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int flatlandSpaceStations(int n, int m, int c[])
{
    qsort(c, m, sizeof(int), compare);

    int maxDist = c[0];

    if (n - 1 - c[m - 1] > maxDist)
        maxDist = n - 1 - c[m - 1];

    for (int i = 1; i < m; i++)
    {
        int dist = (c[i] - c[i - 1]) / 2;

        if (dist > maxDist)
            maxDist = dist;
    }

    return maxDist;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *c = malloc(m * sizeof(int));

    if (c == NULL)
        return 1;

    for (int i = 0; i < m; i++)
        scanf("%d", &c[i]);

    printf("%d\n", flatlandSpaceStations(n, m, c));

    free(c);
    return 0;
}
