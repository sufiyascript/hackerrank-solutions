#include <stdio.h>

int saveThePrisoner(int n, int m, int s)
{
    return ((s + m - 2) % n) + 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m, s;
        scanf("%d %d %d", &n, &m, &s);

        printf("%d\n", saveThePrisoner(n, m, s));
    }

    return 0;
}
