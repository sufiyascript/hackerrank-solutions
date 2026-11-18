
#include <stdio.h>

int main()
{
    int n, arr[1000000];
    int count[100] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    for (int i = 0; i < 100; i++)
    {
        while (count[i] > 0)
        {
            printf("%d ", i);
            count[i]--;
        }
    }

    return 0;
}
