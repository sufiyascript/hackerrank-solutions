#include <stdio.h>

void bonAppetit(int bill_count, int bill[], int k, int b)
{
    int sum = 0;

    for (int i = 0; i < bill_count; i++)
    {
        if (i != k)
        {
            sum += bill[i];
        }
    }

    int annaShare = sum / 2;

    if (b == annaShare)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d\n", b - annaShare);
    }
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int bill[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bill[i]);
    }

    int b;
    scanf("%d", &b);

    bonAppetit(n, bill, k, b);

    return 0;
}
