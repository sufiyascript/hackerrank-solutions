
#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0;
    char b[101];

    scanf("%d", &n);
    scanf("%s", b);

    for (int i = 0; i < n - 2; i++)
    {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0')
        {
            count++;
            i += 2;
        }
    }

    printf("%d\n", count);

    return 0;
}
