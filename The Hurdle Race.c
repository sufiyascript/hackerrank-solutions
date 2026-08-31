#include <stdio.h>

int hurdleRace(int k, int height_count, int* height)
{
    int max = 0;

    for (int i = 0; i < height_count; i++)
    {
        if (height[i] > max)
        {
            max = height[i];
        }
    }

    if (max <= k)
    {
        return 0;
    }

    return max - k;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    int height[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
    }

    int result = hurdleRace(k, n, height);

    printf("%d\n", result);

    return 0;
}
