
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100005];
    int q, i, weight = 0;
    char prev = '\0';

    scanf("%s", s);
    scanf("%d", &q);

    int n = strlen(s);
    int maxWeight = 26 * n;

    int *possible = calloc(maxWeight + 1, sizeof(int));

    for (i = 0; i < n; i++)
    {
        if (s[i] == prev)
            weight += s[i] - 'a' + 1;
        else
            weight = s[i] - 'a' + 1;

        possible[weight] = 1;
        prev = s[i];
    }

    for (i = 0; i < q; i++)
    {
        int x;
        scanf("%d", &x);

        if (x <= maxWeight && possible[x])
            printf("Yes\n");
        else
            printf("No\n");
    }

    free(possible);

    return 0;
}
