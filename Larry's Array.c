
#include <stdio.h>

void rotate(int a[], int i)
{
    int temp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = a[i + 2];
    a[i + 2] = temp;
}

char* larrysArray(int a[], int n)
{
    int i, j;

    for (i = 0; i < n - 2; i++)
    {
        for (j = i; j < n - 2; j++)
        {
            while (a[i] != i + 1)
            {
                rotate(a, j);
                if (a[i] == i + 1)
                    break;

                if (j >= n - 2)
                    break;
            }
        }
    }

    int inversions = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                inversions++;
        }
    }

    return (inversions % 2 == 0) ? "YES" : "NO";
}

int main()
{
    int t, n, i;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("%s\n", larrysArray(a, n));
    }

    return 0;
}
