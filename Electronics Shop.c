#include <stdio.h>

int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b)
{
    int max = -1;

    for (int i = 0; i < keyboards_count; i++)
    {
        for (int j = 0; j < drives_count; j++)
        {
            int total = keyboards[i] + drives[j];

            if (total <= b && total > max)
            {
                max = total;
            }
        }
    }

    return max;
}

int main()
{
    int b, n, m;

    scanf("%d %d %d", &b, &n, &m);

    int keyboards[n];
    int drives[m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &keyboards[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &drives[i]);
    }

    int result = getMoneySpent(n, keyboards, m, drives, b);

    printf("%d\n", result);

    return 0;
}
