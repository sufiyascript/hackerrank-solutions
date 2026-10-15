
#include <stdio.h>

void stones(int n, int a, int b)
{
    int i, j, value;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (i = 0; i < n; i++)
    {
        value = (n - 1 - i) * a + i * b;

        int duplicate = 0;

        for (j = 0; j < i; j++)
        {
            if ((n - 1 - j) * a + j * b == value)
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", value);
    }

    printf("\n");
}

int main()
{
    int t, n, a, b;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);

        stones(n, a, b);
    }

    return 0;
}
