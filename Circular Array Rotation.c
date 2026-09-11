#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    k = k % n;

    for (int i = 0; i < q; i++)
    {
        int index;
        scanf("%d", &index);

        int originalIndex = (index - k + n) % n;

        printf("%d\n", a[originalIndex]);
    }

    return 0;
}
