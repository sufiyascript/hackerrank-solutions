#include <stdio.h>

int getTotalX(int a_count, int* a, int b_count, int* b)
{
    int count = 0;

    for (int x = 1; x <= 100; x++)
    {
        int valid = 1;

        // x should be divisible by every element of a
        for (int i = 0; i < a_count; i++)
        {
            if (x % a[i] != 0)
            {
                valid = 0;
                break;
            }
        }

        // x should divide every element of b
        if (valid)
        {
            for (int j = 0; j < b_count; j++)
            {
                if (b[j] % x != 0)
                {
                    valid = 0;
                    break;
                }
            }
        }

        if (valid)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int result = getTotalX(n, a, m, b);

    printf("%d\n", result);

    return 0;
}
