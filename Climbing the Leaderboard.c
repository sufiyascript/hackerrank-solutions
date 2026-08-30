#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d", &n);

    int ranked[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ranked[i]);
    }

    scanf("%d", &m);

    int player[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &player[i]);
    }

    // Remove duplicate scores from ranked
    int unique[n];
    int k = 0;

    unique[k++] = ranked[0];

    for (int i = 1; i < n; i++)
    {
        if (ranked[i] != ranked[i - 1])
        {
            unique[k++] = ranked[i];
        }
    }

    // Find rank for each player score
    int j = k - 1;

    for (int i = 0; i < m; i++)
    {
        while (j >= 0 && player[i] >= unique[j])
        {
            j--;
        }

        printf("%d\n", j + 2);
    }

    return 0;
}
