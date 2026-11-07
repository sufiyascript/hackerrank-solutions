
#include <stdio.h>
#include <string.h>

int main()
{
    int n, k;
    char s[101];

    scanf("%d", &n);
    scanf("%s", s);
    scanf("%d", &k);

    k = k % 26;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] - 'A' + k) % 26 + 'A';
        }
    }

    printf("%s\n", s);

    return 0;
}
