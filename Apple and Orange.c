#include <stdio.h>

void countApplesAndOranges(int s, int t, int a, int b,
                           int apples_count, int apples[],
                           int oranges_count, int oranges[])
{
    int apple = 0;
    int orange = 0;

    // Count apples
    for (int i = 0; i < apples_count; i++)
    {
        int position = a + apples[i];

        if (position >= s && position <= t)
        {
            apple++;
        }
    }

    // Count oranges
    for (int i = 0; i < oranges_count; i++)
    {
        int position = b + oranges[i];

        if (position >= s && position <= t)
        {
            orange++;
        }
    }

    printf("%d\n", apple);
    printf("%d\n", orange);
}

int main()
{
    int s, t;
    int a, b;
    int m, n;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    int apples[m];
    int oranges[n];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &apples[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &oranges[i]);
    }

    countApplesAndOranges(s, t, a, b, m, apples, n, oranges);

    return 0;
}
